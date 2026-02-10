import sys
import time


def ani(text):
    text = text.title()  # auto title-case once, always
    for character in text:
        sys.stdout.write(character)
        sys.stdout.flush()
        time.sleep(0.05)


art = r"""
                  _______       __      ___            __       ___  ___  ___  ___                        
                 /" _   "|     /""\    |"  |          /""\     |"  \/"  ||"  \/"  |                       
                (: ( \___)    /    \   ||  |         /    \     \   \  /  \   \  /                        
                 \/ \        /' /\  \  |:  |        /' /\  \     \\  \/    \\  \/                         
                 //  \ ___  //  __'  \  \  |___    //  __'  \    /\.  \    /   /                          
                (:   _(  _|/   /  \\  \( \_|:  \  /   /  \\  \  /  \   \  /   /                           
                 \_______)(___/    \___)\_______)(___/    \___)|___/\___||___/                            

      __       ________  ___      ___  _______  _____  ___  ___________  ____  ____   _______    _______  
     /""\     |"      "\|"  \    /"  |/"     "|(\"   \|"  \("     _   ")("  _||_ " | /"      \  /"     "| 
    /    \    (.  ___  :)\   \  //  /(: ______)|.\\   \    |)__/  \\__/ |   (  ) : ||:        |(: ______) 
   /' /\  \   |: \   ) || \\  \/. ./  \/    |  |: \.   \\  |   \\_ /    (:  |  | . )|_____/   ) \/    |   
  //  __'  \  (| (___\ ||  \.    //   // ___)_ |.  \    \. |   |.  |     \\ \__/ //  //      /  // ___)_  
 /   /  \\  \ |:       :)   \\   /   (:      "||    \    \ |   \:  |     /\\ __ //\ |:  __   \ (:      "| 
(___/    \___)(________/     \__/     \_______) \___|\____\)    \__|    (__________)|__|  \___) \_______) 
"""
art2 = r"""
  ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███  
 ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒
▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒
░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄  
░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒
 ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░
  ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░
░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░ 
      ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░     
                                                     ░
"""

print(art)
ani("Year 3097...\n")
time.sleep(1)

ani("The galaxy was once united under the Celestial Council.\n")
time.sleep(1)

ani("For centuries, peace ruled the starways...\n")
time.sleep(1)

ani("Until the rise of a ruthless force...\n")
time.sleep(1)

ani("The Void Syndicate.\n")
time.sleep(1)

ani("\nPlanets went silent.\n")
time.sleep(1)

ani("Fleets vanished into darkness.\n")
time.sleep(1)

ani("The Council fell... one world at a time.\n")
time.sleep(1.5)

ani("\nAnd now...\n")
time.sleep(1)

ani("The final Star Core is being hunted.\n")
time.sleep(1)

ani("If it is found, the Galactic Engine will awaken...\n")
time.sleep(1)

ani("And reality itself may be rewritten.\n")
time.sleep(1.5)

ani("\nA distress signal has been sent...\n")
time.sleep(1)

ani("Not to an army...\n")
time.sleep(1)

ani("Not to a commander...\n")
time.sleep(1)

ani("But to someone... unknown.\n")
time.sleep(1.5)

ani("\nHello Adventurer...\n")
time.sleep(1)

ani("The galaxy is calling.\n")
time.sleep(1)

ani("\nWhat is your name: ")
name = input()

ani(f"\nWelcome, {name}...\n")
time.sleep(1)

ani("Your journey begins now.\n")
time.sleep(1)

for i in range(3):
    time.sleep(1)
    ani("\nLaunching Mission...\n")

ani("Traveling through the hyperspace.\n")
ani("While Traveling You encountered Galaxy Beasts !\n")
ani("1. Kill Them\n2. Change Your Direction\n")
ani("Enter Your Choice: ")
choice = input()

if choice == "1":
    ani("You Started Your Laser Shooters\n")
    ani("The Beast Dodged Your First Shot. He Attacked Back With Fireball\n")
    ani("Press Enter To Dodge: ")
    input()

    ani("You Dodged but. . .\n")
    ani("As You were dodging, It hit your shield\n")
    ani("The damage Was Not Critical, You fire back ! \n")
    ani("It Hit The Galaxy Monster\n")
    ani("You Countinued To Your Destination\n")
    ani("You've Reached Your Destination\n\n")
    time.sleep(1)

    ani("Planet Xenox3B. . .\n")
    time.sleep(1)
    ani("2000 Lightyears Away From Planet Earth. . .\n")
    ani("It is the planet where The Force Of Void Syndicate have Their Head Quaters\n")
    ani("Press Enter to land down to Planet\n")
    input()

    for i in range(3):
        time.sleep(1)
        ani("\nLanding. . .\n")

    ani("The surface is similar to martian surface But The Atmosphere is 80 Helium\n")
    time.sleep(1)
    ani("No Sign of Oxygen. . .\n")
    ani("Press Enter To wear your spacesuit\n")
    input()

    ani("You left the Space ship\n")
    ani("as you were sneaking to the head quaters\n")
    ani("You encountered One Of their Guards\n\n")
    ani("1. Kill The Guard\n")
    ani("2. Sneak Into the Builds\n")
    ani("Enter Your Choice: ")
    choice = input()

    if choice == "1":
        ani("You Killed The Guard\n")
        ani("No one Saw it, you entered the building\n")
        ani("You look for stair case\n")
        ani("1. Go left\n2. Go right\n")
        ani("Enter Your Choice: ")
        choice = input()

        if choice == "1":
            ani("the stair case is in front of you\n")
            ani("You go up the floor\n")
            ani("You enter a hallway\n")
            ani("1. Go Left of Hallway\n2. Go right of hallway\n")
            ani("Enter Your Choice: ")
            choice = input()

            if choice == "1":
                ani("you Made it !\n")
                ani("You See Void Syndicates Leader Room\n")
                ani("as you about were about to enter the room. . . \n")
                ani("The Leader Comer from Behind\n")
                ani("You turn back and he attacks you, it cracks your helmet !!")
                ani("Second Attack Comes, You saw it \n")
                ani("You Blocked, he backed up. . . ")
                ani("You Backed up too\n")

                time.sleep(1)
                ani(". . .\n")
                time.sleep(1)
                ani(". . .\n")

                ani("You Draw out Your Star Sword\n")
                ani("He Draws Out his too\n")
                ani("You Both staring into each other souls\n")
                ani("Press Enter Too Attack\n")
                input()

                ani("Missed, He attacks Back at you\n")
                ani("1. Dodge left\n2. dodge right")
                ani("Enter Your Choice: ")
                choice = input()

                if choice == "1":
                    ani(
                        "You Dodge left but he counter attacked, striking the sword into You Heart\n"
                    )
                    print(art2)

                elif choice == "2":
                    ani("You Dodge Right and attacked him\n")
                    ani("the strike hit him, but it only skinned his face a little !\n")
                    ani("He returns the strike You\n")
                    ani("1. Block the Strike\n2. Dodge The strike\n")
                    ani("Enter Your Choice\n: ")
                    choice = input()

                    if choice == "1":
                        ani("You Blocked the strike\n")
                        ani("Giving you an opening to kill\n")
                        ani("Press Enter For The final strike\n")
                        input()

                        ani("You Killed the leader of the Void Syndicate !!!\n\n")
                        time.sleep(1)
                        ani("Congragulations Adventurer !!!\n")
                        ani("You have Completed the Game :p\n")
                        print(art2)

                    elif choice == "2":
                        ani("You dodged right\n")
                        ani("For Him it it left an opening. . . \n")
                        ani("He Strikes The sword into your throat\n")
                        print(art2)

                    else:
                        ani(
                            "\nInvalid choice. The galaxy does not wait for hesitation...\n"
                        )
                        print(art2)

                else:
                    ani(
                        "\nInvalid choice. The galaxy does not wait for hesitation...\n"
                    )
                    print(art2)

        elif choice == "2":
            ani("You Saw a room!\n")
            ani("the curiosty kills you, you enter the room\n")
            time.sleep(1)
            ani(". . .\n")
            time.sleep(1)
            ani(". . .\n")
            time.sleep(1)
            ani(". . .\n")
            ani("It's a locker room full of guards\n")
            print(art2)

        else:
            ani("\nInvalid choice. The galaxy does not wait for hesitation...\n")
            print(art2)

    elif choice == "2":
        ani("You sneaked Into the building\n\n")
        print("SPOTTED !!!")
        ani("A guard saw you!\n")
        print(art2)

    else:
        ani("\nInvalid choice. The galaxy does not wait for hesitation...\n")
        print(art2)

elif choice == "2":
    ani(
        "You Accelerate With the speed of light. . . Leaving The Galaxy Monster Behind\n"
    )
    ani("But As You Were Accelerating the Rocket Fuel Was Running Low\n")
    ani("Few Seconds Later The Fuel Ran Out !\n")
    print(art2)

else:
    ani("\nInvalid choice. The galaxy does not wait for hesitation...\n")
    print(art2)
