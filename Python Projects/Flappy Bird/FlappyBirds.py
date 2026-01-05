"""
Modules:
-----------------------------------------------------------------------------
1. Khwaja Talha (Team Leader & Programmer):
   - Coordinates the project.
   - Writes and manages the core game code.
   - Ensures all parts work together smoothly.

2. Muhammad Wasiq (Programmer & Tester):
   - Helps with the visual side of the game (backgrounds, colors, layout).
   - Assists in writing the project report.

3. Zainab Sajid (Designer & Documentation Assistant):
   - Works on coding game features like movement, collision, and scoring.
   - Helps test the game for any errors.

4. Muhammad Ibrahim (Research):
   - Looks up useful tutorials or ideas to improve the game.
=============================================================================
"""

# ===========================================================================
# MODULE 1: IMPORTS & INITIALIZATION
# ===========================================================================
# Importing the necessary libraries
import pygame  # Core game engine
import sys     # System specific parameters (for exiting)
import time    # Time access and conversions
import random  # For randomizing pipe heights

# Initializing the pygame engine
pygame.init()

# Setup clock to control Frames Per Second (FPS)
clock = pygame.time.Clock()


# ===========================================================================
# MODULE 2: GAME FUNCTIONS (LOGIC & DRAWING)
# ===========================================================================

# --- Environment Module ---
def draw_floor():
    """Draws the moving floor at the bottom of the screen."""
    screen.blit(floor_img, (floor_x, 520))
    screen.blit(floor_img, (floor_x + 448, 520))

# --- Pipe Management Module ---
def create_pipes():
    """Generates new pipe positions (top and bottom) based on random heights."""
    pipe_y = random.choice(pipe_height)
    top_pipe = pipe_img.get_rect(midbottom=(467, pipe_y - 300))
    bottom_pipe = pipe_img.get_rect(midtop=(467, pipe_y))
    return top_pipe, bottom_pipe

def pipe_animation():
    """Moves pipes across the screen and handles collision checks."""
    global game_over, score_time
    for pipe in pipes:
        # Flip the pipe image for the top pipe
        if pipe.top < 0:
            flipped_pipe = pygame.transform.flip(pipe_img, False, True)
            screen.blit(flipped_pipe, pipe)
        else:
            screen.blit(pipe_img, pipe)

        # Move pipe to the left
        pipe.centerx -= 3
        
        # Remove pipe if it goes off-screen to save memory
        if pipe.right < 0:
            pipes.remove(pipe)

        # Collision detection (Module: Physics)
        if bird_rect.colliderect(pipe):
            game_over = True

# --- UI & Scoring Module ---
def draw_score(game_state):
    """Displays the current score or the Game Over screen."""
    if game_state == "game_on":
        score_text = score_font.render(str(score), True, (255, 255, 255))
        score_rect = score_text.get_rect(center=(width // 2, 66))
        screen.blit(score_text, score_rect)
    elif game_state == "game_over":
        score_text = score_font.render(f" Score: {score}", True, (255, 255, 255))
        score_rect = score_text.get_rect(center=(width // 2, 66))
        screen.blit(score_text, score_rect)

        high_score_text = score_font.render(f"High Score: {high_score}", True, (255, 255, 255))
        high_score_rect = high_score_text.get_rect(center=(width // 2, 506))
        screen.blit(high_score_text, high_score_rect)

def score_update():
    """Updates the score when the bird passes a pipe."""
    global score, score_time, high_score
    if pipes:
        for pipe in pipes:
            # Check if bird is passing the pipe center
            if 65 < pipe.centerx < 69 and score_time:
                score += 1
                score_time = False
            # Reset score trigger once pipe is passed
            if pipe.left <= 0:
                score_time = True

    if score > high_score:
        high_score = score


# ===========================================================================
# MODULE 3: ASSET LOADING & CONFIGURATION
# ===========================================================================

# Game window configuration
width, height = 350, 622
clock = pygame.time.Clock()
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Flappy Bird")

# Loading Environment Assets
back_img = pygame.image.load("Images/bg.png")
floor_img = pygame.image.load("Images/ground.png")
floor_x = 0

# Loading Bird Assets (Animation Stages)
bird_up = pygame.image.load("Images/bird1.png")
bird_down = pygame.image.load("Images/bird2.png")
bird_mid = pygame.image.load("Images/bird3.png")
birds = [bird_up, bird_mid, bird_down]
bird_index = 0

# Setting up Bird Event Timer (Animation Speed)
bird_flap = pygame.USEREVENT
pygame.time.set_timer(bird_flap, 200)

# Initi al Bird Position & Physics Variables
bird_img = birds[bird_index]
bird_rect = bird_img.get_rect(center=(67, 622 // 2))
bird_movement = 0
gravity = 0.17
# Loading Pipe Assets
pipe_img = pygame.image.load("Images/pipe.png")
pipe_height = [400, 350, 533, 490]
pipes = []

# Setting up Pipe Event Timer (Spawn Rate)
create_pipe = pygame.USEREVENT + 1
pygame.time.set_timer(create_pipe, 1200)

# Loading Game Over Assets
game_over = False
over_img = pygame.image.load("Images/restart.png").convert_alpha()
over_rect = over_img.get_rect(center=(width // 2, height // 2))

# Setting up Font & Score Variables
score = 0
high_score = 0
score_time = True
score_font = pygame.font.Font("freesansbold.ttf", 27)


# ===========================================================================
# MODULE 4: MAIN GAME LOOP
# ===========================================================================
running = True
while running:
    clock.tick(90) # Limit frame rate to 90 FPS
    # --- Event Handling Module ---
    for event in pygame.event.get():
        if event.type == pygame.QUIT:  # QUIT event
            running = False
            sys.exit()
        if event.type == pygame.KEYDOWN:  # Key pressed event
            # Jump Logic
            if event.key == pygame.K_SPACE and not game_over:
                bird_movement = 0
                bird_movement = -6
            # Reset Game Logic
            if event.key == pygame.K_SPACE and game_over:
                game_over = False
                pipes = []
                bird_movement = 0
                bird_rect = bird_img.get_rect(center=(67, 622 // 2))
                score_time = True
                score = 0
        # Bird Animation Event
        if event.type == bird_flap:
            bird_index += 1
            if bird_index > 2:
                bird_index = 0
            bird_img = birds[bird_index]
            bird_rect = bird_up.get_rect(center=bird_rect.center)
        # Pipe Spawn Event
        if event.type == create_pipe:
            pipes.extend(create_pipes())
    # --- Drawing & Update Module ---
    # Draw Background & Floor
    screen.blit(floor_img, (floor_x, 550))
    screen.blit(back_img, (0, 0))

    # Check Game State
    if not game_over:
        # Physics: Apply gravity
        bird_movement += gravity
        bird_rect.centery += bird_movement
        
        # Graphics: Rotate bird
        rotated_bird = pygame.transform.rotozoom(bird_img, bird_movement * -6, 1)

        # Physics: Check collision with floor or ceiling
        if bird_rect.top < 5 or bird_rect.bottom >= 550:
            game_over = True

        screen.blit(rotated_bird, bird_rect)
        
        # Update Pipes & Score
        pipe_animation()
        score_update()
        draw_score("game_on")
        
    elif game_over:
        screen.blit(over_img, over_rect)
        draw_score("game_over")
    # Animation: Scroll Floor
    floor_x -= 1
    if floor_x < -448:
        floor_x = 0
    draw_floor()
    # Update the display
    pygame.display.update()
# Quit the pygame and system
pygame.quit()
sys.exit()