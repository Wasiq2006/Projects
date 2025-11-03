// This shows a Working of Computer-Based Test... Which shows the structure of c++ Using simple conditions variables data types etc.
// This line includes the iostream library, which is necessary for input (cin) and output (cout) operations.
#include <iostream>
// This line allows us to use names for objects and variables from the standard library without prefixing them with "std::".
using namespace std;
// The main function is the entry point of any C++ program.
int main() 
{
    // These lines print a welcome banner to the console.
    // '\t' is an escape sequence for a horizontal tab, used here for formatting.
    // 'endl' inserts a new line and flushes the output buffer.
    cout << "\t\t ==================================" << endl;
    cout << "\t\t Welcome To CBT-Computer Based Test" << endl;
    cout << "\t\t ==================================" << endl;
    // Declare a string variable 'name' to store the user's name.
    string name;
    // Prompt the user to enter their name.
    cout << "Enter Your Name: ";
    // Read the entire line of input (including spaces) from the user and store it in the 'name' variable.
    getline(cin, name);

    // Character to control the play again loop
    char playAgain;

    // Main do-while loop to allow the user to play again
    do
    {
        // Declare an integer variable 'section' to store the user's menu choice.
        // Declare an integer variable 'score' and initialize it to 0. This will track the user's correct answers.
        int section, score = 0;
        // Checks to track if sections are completed
        bool iqDone = false, engDone = false, csDone = false, phyDone = false;

        // Start a do-while loop. The code inside this loop will execute at least once,
        // and it will continue to loop as long as the user's 'section' choice is not 5.
        do
        {
            // Display a personalized greeting and the main menu options.
            cout << "============================================================" << endl;
            cout << "Hello " << name << "! Please select a Section to begin the quiz!" << endl;
            cout << "============================================================" << endl;
            // Display only sections that are not yet completed
            if (!iqDone)
                cout << "1. IQ\n";
            if (!engDone)
                cout << "2. English\n";
            if (!csDone)
                cout << "3. Computer Science\n";
            if (!phyDone)
                cout << "4. Physics\n";
            cout << "5. Quit" << endl;
            // Prompt the user to enter their choice.
            cout << "Enter Your Choice(1/2/3/4/5): ";
            // // Take user input as a string first to avoid crashing if user enters a letter
            string input;
            // Check if the user entered a valid number from 1 to 5
            cin >> input;
            if (input == "1") // User selected IQ section
                section = 1;
            else if (input == "2") // User selected English section
                section = 2;
            else if (input == "3") // User selected Computer Science section
                section = 3;
            else if (input == "4") // User selected Physics section
                section = 4;
            else if (input == "5") // User selected Quit
                section = 5;
            else
            {
                cout << "============================================================" << endl;
                // If the user types an invalid input like a letter or a wrong number
                cout << "Invalid input! Please enter a number between 1 and 5." << endl;
                continue; // Skip current loop iteration and show menu again safely
            }
            cout << "============================================================" << endl;
            // The switch statement directs the program to a specific 'case' based on the value of 'section'.
            switch (section)
            {
            // If the user entered 1, this case will be executed
            case 1:
            {
                if (iqDone)
                {
                    cout << "You have already completed the IQ section." << endl;
                    break;
                }
                else
                {
                    // Displays IQ Section
                    cout << "\t\t\t =============" << endl;
                    cout << "\t\t\t  IQ Section" << endl;
                    cout << "\t\t\t =============" << endl;
                    // --- Question 1 ---
                    cout << "1. Which number completes the sequence? 2, 4, 6, 8, ___" << endl;
                    cout << "(A) 9\n(B) 10\n(C) 12\n(D) 11" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer1;   // Declare a character variable to store the answer.
                    cin >> answer1; // Read the character input from the user.
                    // Check if the user's answer is 'B' or 'b'.
                    if (answer1 == 'B' || answer1 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct option Was (B) 10" << endl;
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 2 ---
                    cout << "2. Analogy: Dog is to puppy as cat is to ___" << endl;
                    cout << "(A) Kitten\n(B) Cub\n(C) Calf\n(D) Foal" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer2;
                    cin >> answer2;
                    // Check if the answer is 'A' or 'a'.
                    if (answer2 == 'A' || answer2 == 'a')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer2 == 'B' || answer2 == 'b' || answer2 == 'C' || answer2 == 'c' || answer2 == 'D' || answer2 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (A) Kitten" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 3 ---
                    cout << "3. Which number does not belong? 3, 5, 7, 9, 10?" << endl;
                    cout << "(A) 3\n(B) 5\n(C) 9\n(D) 10" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer3;
                    cin >> answer3;
                    // Check if the answer is 'D' or 'd'.
                    if (answer3 == 'D' || answer3 == 'd')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer3 == 'A' || answer3 == 'a' || answer3 == 'B' || answer3 == 'b' || answer3 == 'C' || answer3 == 'c')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (D) 10" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 4 ---
                    cout << "4. Which shape has four equal sides and four right angles?" << endl;
                    cout << "(A) Rectangle\n(B) Square\n(C) Triangle\n(D) Circle" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer4;
                    cin >> answer4;
                    // Check if the answer is 'B' or 'b'.
                    if (answer4 == 'B' || answer4 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer4 == 'A' || answer4 == 'a' || answer4 == 'C' || answer4 == 'c' || answer4 == 'D' || answer4 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) Square" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 5 ---
                    cout << "5. What comes next in the series? 1, 3, 5, ___" << endl;
                    cout << "(A) 6\n(B) 7\n(C) 8\n(D) 10" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer5;
                    cin >> answer5;
                    // Check if the answer is 'B' or 'b'.
                    if (answer5 == 'B' || answer5 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer5 == 'A' || answer5 == 'a' || answer5 == 'C' || answer5 == 'c' || answer5 == 'D' || answer5 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) 7" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 6 ---
                    cout << "6. All cats are mammals. Fluffy is a cat. What follows?" << endl;
                    cout << "(A) Fluffy is a mammal.\n(B) Fluffy is not a mammal.\n(C) Some mammal are not cats.\n(D) No conclusion." << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer6;
                    cin >> answer6;
                    // Check if the answer is 'A' or 'a'.
                    if (answer6 == 'A' || answer6 == 'a')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer6 == 'B' || answer6 == 'b' || answer6 == 'C' || answer6 == 'c' || answer6 == 'D' || answer6 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (A) Fluffy is a mammal" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 7 ---
                    cout << "7. Which number is a multiple of both 3 and 4?" << endl;
                    cout << "(A) 9\n(B) 12\n(C) 8\n(D) 18" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer7;
                    cin >> answer7;
                    // Check if the answer is 'B' or 'b'.
                    if (answer7 == 'B' || answer7 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer7 == 'A' || answer7 == 'a' || answer7 == 'C' || answer7 == 'c' || answer7 == 'D' || answer7 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) 12" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 8 ---
                    cout << "8. Which word is the odd one out? apple, banana, carrot, grape?" << endl;
                    cout << "(A) Apple\n(B) Banana\n(C) Carrot\n(D) Grape" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer8;
                    cin >> answer8;
                    // Check if the answer is 'C' or 'c'.
                    if (answer8 == 'C' || answer8 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer8 == 'A' || answer8 == 'a' || answer8 == 'B' || answer8 == 'b' || answer8 == 'D' || answer8 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Carrot" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 9 ---
                    cout << "9. What letter comes next? A, C, E, ___ ?" << endl;
                    cout << "(A) F\n(B) G\n(C) H\n(D) I" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer9;
                    cin >> answer9;
                    // Check if the answer is 'B' or 'b'.
                    if (answer9 == 'B' || answer9 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer9 == 'A' || answer9 == 'a' || answer9 == 'C' || answer9 == 'c' || answer9 == 'D' || answer9 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) G" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 10 ---
                    cout << "10. Ayesha have 3 apples. You take away 2 apples. How many apples do you have?" << endl;
                    cout << "(A) 1\n(B) 2\n(C) 3\n(D) 0" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer10;
                    cin >> answer10;
                    // Check if the answer is 'B' or 'b'.
                    if (answer10 == 'B' || answer10 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer10 == 'A' || answer10 == 'a' || answer10 == 'C' || answer10 == 'c' || answer10 == 'D' || answer10 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) 2" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    iqDone = true;
                    break;
                } // end of else statement
            } // End of case 1
            case 2:
            {
                if (engDone)
                {
                    cout << "You have already completed the English section." << endl;
                    break;
                }
                else
                {

                    // Displays English Section
                    cout << "\t\t\t =================" << endl;
                    cout << "\t\t\t  English Section" << endl;
                    cout << "\t\t\t =================" << endl;
                    // --- Question 1 ---
                    cout << "1. Choose the correct spelling:" << endl;
                    cout << "(A) Recieve\n(B) Receive\n(C) Receeve\n(D) Receve" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'B' || answer1 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment the score by 1.
                    }
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct option Was (B) Receive" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 2 ---
                    cout << "2. Which word is a noun?" << endl;
                    cout << "(A) Quickly\n(B) Beautiful\n(C) Happiness\n(D) Run" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'C' || answer2 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer2 == 'A' || answer2 == 'a' || answer2 == 'B' || answer2 == 'b' || answer2 == 'D' || answer2 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Happiness" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 3 ---
                    cout << "3. Choose the correct tense:\nShe ___ her homework before dinner." << endl;
                    cout << "(A) Finishes\n(B) is finishing\n(C) had finished\n(D) finishing" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'C' || answer3 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer3 == 'A' || answer3 == 'a' || answer3 == 'B' || answer3 == 'b' || answer3 == 'D' || answer3 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) had finished" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 4 ---
                    cout << "4. Fill in the blank with the correct preposition:\nThe cat is ___ the table." << endl;
                    cout << "(A) on\n(B) in\n(C) at\n(D) over" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer4;
                    cin >> answer4;
                    if (answer4 == 'A' || answer4 == 'a')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer4 == 'B' || answer4 == 'b' || answer4 == 'C' || answer4 == 'c' || answer4 == 'D' || answer4 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (A) on" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 5 ---
                    cout << "5. Identify the synonym of happy:" << endl;
                    cout << "(A) Sad\n(B) Joyful\n(C) Angry\n(D) Tired" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer5;
                    cin >> answer5;
                    if (answer5 == 'B' || answer5 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer5 == 'A' || answer5 == 'a' || answer5 == 'C' || answer5 == 'c' || answer5 == 'D' || answer5 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) Joyful" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    } // --- Question 6 ---
                    cout << "============================================================" << endl;
                    cout << "6. Choose the correct form of the verb:\nHe ___ to the store every Saturday." << endl;
                    cout << "(A) go\n(B) goes\n(C) going\n(D) gone" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer6;
                    cin >> answer6;
                    if (answer6 == 'B' || answer6 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer6 == 'A' || answer6 == 'a' || answer6 == 'C' || answer6 == 'c' || answer6 == 'D' || answer6 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) goes" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    } // --- Question 7 ---
                    cout << "============================================================" << endl;
                    cout << "7. Which sentence is correct?" << endl;
                    cout << "(A) She don't like ice cream.\n(B) She doesn't likes ice cream.\n(C) She doesn't like ice cream.\n(D) She not like ice cream." << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer7;
                    cin >> answer7;
                    if (answer7 == 'C' || answer7 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer7 == 'A' || answer7 == 'a' || answer7 == 'B' || answer7 == 'b' || answer7 == 'D' || answer7 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) She doesn't like ice cream." << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    } // --- Question 8 ---
                    cout << "============================================================" << endl;
                    cout << "8. Fill in the blank with the correct preposition:\nThe book is ___ the shelf." << endl;
                    cout << "(A) on\n(B) in\n(C) at\n(D) over" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer8;
                    cin >> answer8;
                    if (answer8 == 'A' || answer8 == 'a')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer8 == 'B' || answer8 == 'b' || answer8 == 'C' || answer8 == 'c' || answer8 == 'D' || answer8 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (A) on" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    } // --- Question 9 ---
                    cout << "============================================================" << endl;
                    cout << "9. Identify the antonym of 'cold':" << endl;
                    cout << "(A) Hot\n(B) Warm\n(C) Cool\n(D) Freezing" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer9;
                    cin >> answer9;
                    if (answer9 == 'A' || answer9 == 'a')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer9 == 'B' || answer9 == 'b' || answer9 == 'C' || answer9 == 'c' || answer9 == 'D' || answer9 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (A) Hot" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    } // --- Question 10 ---
                    cout << "============================================================" << endl;
                    cout << "10. Choose the correct sentence:" << endl;
                    cout << "(A) He don't like tea.\n(B) He doesn't likes tea.\n(C) He doesn't like tea.\n(D) He not like tea." << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer10;
                    cin >> answer10;
                    if (answer10 == 'C' || answer10 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1;
                    }
                    else if (answer10 == 'A' || answer10 == 'a' || answer10 == 'B' || answer10 == 'b' || answer10 == 'D' || answer10 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) He doesn't like tea." << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    engDone = true;
                } // end of else statement
                break;
            } // End of case 2
            case 3:
            {
                if (csDone)
                {
                    cout << "You have already completed the Computer Science section." << endl;
                    break;
                }
                else
                {
                    cout << "\t\t==========================\n";
                    cout << "\t\t COMPUTER SCIENCE SECTION\n";
                    cout << "\t\t==========================\n";
                    //--- Question 1 ---
                    cout << "1. A printer is an example of: ";
                    cout << "\n(A) Input Device\n(B) Output Device\n(C) Storage Device\n(D) Processing Unit";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer1;
                    cin >> answer1;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer1 == 'B' || answer1 == 'b')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (B) Input Device\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 2 ---
                    cout << "2. Which memory is volatile? ";
                    cout << "\n(A) ROM\n(B) RAM\n(C) DVD\n(D) Hard Drive";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer2;
                    cin >> answer2;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer2 == 'B' || answer2 == 'b')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (B) RAM\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 3 ---
                    cout << "3. Which memory is the fastest? ";
                    cout << "\n(A) Hard Disk\n(B) RAM\n(C) Cache\n(D) USB";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer3;
                    cin >> answer3;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer3 == 'C' || answer3 == 'c')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'B' || answer1 == 'b' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!/\n";
                        cout << "Correct Option Was (C) Cache\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 4 ---
                    cout << "4. The brain of computer is called? ";
                    cout << "\n(A) RAM\n(B) CPU\n(C) Hard Disk\n(D) Monitor ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer4;
                    cin >> answer4;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer4 == 'B' || answer4 == 'b')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (B) CPU\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 5 ---
                    cout << "5. Which language is used to create webpages?";
                    cout << "\n(A) C++\n(B) HTML\n(C) Python\n(D) Java";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer5;
                    cin >> answer5;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer5 == 'B' || answer5 == 'b')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (B) HTML\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 6 ---
                    cout << "6. What does CPU stand for? ";
                    cout << "\n(A) Central Process Unit\n(B) Computer Personal Unit\n(C) Central Processing Unit\n(D) Central Programming Unit ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer6;
                    cin >> answer6;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer6 == 'C' || answer6 == 'c')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'B' || answer1 == 'b' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (C) Central Processing Unit\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 7 ---
                    cout << "7. Which one is a programming language? ";
                    cout << "\n(A) Google\n(B) Windows\n(C) Excel\n(D) Python ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer7;
                    cin >> answer7;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer7 == 'D' || answer7 == 'd')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'B' || answer1 == 'b' || answer1 == 'C' || answer1 == 'c')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (D) Python\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 8 ---
                    cout << "8. What does ROM stand for? ";
                    cout << "\n(A) Read-On Memory\n(B) Read-Only Memory\n(C) Run-On Memory\n(D) Random-Only Memory ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer8;
                    cin >> answer8;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer8 == 'B' || answer8 == 'b')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (B) Read-Only Memory\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 9 ---
                    cout << "9. What type of memory is RAM? ";
                    cout << "\n(A) Temporary\n(B) External\n(C) Permanent\n(D) Optical ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer9;
                    cin >> answer9;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer9 == 'A' || answer9 == 'a')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'B' || answer1 == 'b' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (A) Temporary\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    // --- Question 10 ---
                    cout << "10. Which one is an input device? ";
                    cout << "\n(A) Monitor\n(B) Printer\n(C) Keyboard\n(D) Speaker ";
                    cout << "\nEnter Your Choice(A/B/C/D): ";
                    char answer10;
                    cin >> answer10;
                    // Check if the user's answer is 'B' or'b'.
                    if (answer10 == 'C' || answer10 == 'c')
                    {
                        cout << "Your Answer Is Correct!\n";
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'B' || answer1 == 'b' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer is Incorrect!\n";
                        cout << "Correct Option Was (C) Keyboard\n";
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!\n";
                    }
                    cout << "============================================================" << endl;
                    csDone = true;
                } // end of else statement
                break;
            }
            case 4:
            {
                if (phyDone)
                {
                    cout << "You have already completed the Physics section." << endl;
                    break;
                }
                else
                {
                    cout << "\t\t  ====================" << endl;
                    cout << "\t\t    Physics Section" << endl;
                    cout << "\t\t  ====================" << endl;
                    // --- Question 1 ---
                    cout << "1. Which natural process involves nuclear fusion?" << endl;
                    cout << "(A) Lightning\n(B) Sunlight production in the Sun\n(C) Earth's core heating\n(D) Radioactive decay" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer1;   // Declare a character variable to store the answer.
                    cin >> answer1; // Read the character input from the user.
                    // Check if the user's answer is 'B' or 'b'.
                    if (answer1 == 'B' || answer1 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment the score by 1.
                    }
                    // Check if the user entered any of the other valid options.
                    else if (answer1 == 'A' || answer1 == 'a' || answer1 == 'C' || answer1 == 'c' || answer1 == 'D' || answer1 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct option Was (B) Sunlight production in the Sun" << endl;
                    }
                    // If the input is not any of the recognized options.
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 2 ---
                    cout << "2. The speed of sound is fastest in:" << endl;
                    cout << "(A) Air\n(B) Water\n(C) Steel\n(D) Vacuum" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer2;
                    cin >> answer2;
                    // Check if the answer is 'A' or 'a'.
                    if (answer2 == 'C' || answer2 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer2 == 'B' || answer2 == 'b' || answer2 == 'A' || answer2 == 'a' || answer2 == 'D' || answer2 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Steel" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    cout << "3. What type of mirror is used in car headlights to focus light?" << endl;
                    cout << "(A) Plane Mirror\n(B) Convex Mirror\n(C) Concave Mirror\n(D) parabolic Mirror" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'C' || answer3 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer3 == 'B' || answer3 == 'b' || answer3 == 'A' || answer3 == 'a' || answer3 == 'D' || answer3 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Concave Mirror" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // *** Question 4***
                    cout << "4. What is the main cause of tides in the ocean?" << endl;
                    cout << "(A) Wind\n(B) Sunlight\n(C) Gravitational pull of the Moon\n(D) Earth's rotation" << endl;
                    cout << "Enter Your Choice: ";
                    char answer4;
                    cin >> answer4;
                    if (answer4 == 'C' || answer4 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer4 == 'B' || answer4 == 'b' || answer4 == 'A' || answer4 == 'a' || answer4 == 'D' || answer4 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Gravitational pull of the Moon" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 5 ---
                    cout << "5. What Happens to the pressure of a gas when its volume decreases, assuming temperature is constant?" << endl;
                    cout << "(A) Pressure decreases\n(B) Pressure remains the same\n(C) Pressure increases\n(D) Pressure becomes zero" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer5;
                    cin >> answer5;
                    if (answer5 == 'C' || answer5 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer5 == 'B' || answer5 == 'b' || answer5 == 'A' || answer5 == 'a' || answer5 == 'D' || answer5 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Pressure increases" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << "============================================================" << endl;
                    // --- Question 6 ---
                    cout << "6. The acceleration due to gravity on Earth is approximately:" << endl;
                    cout << "(A) 8.9 m/s^2\n(B) 9.8 m/s^2\n(C) 10.8 m/s^2\n(D) 9.0 m/s^2" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer6;
                    cin >> answer6;
                    if (answer6 == 'B' || answer6 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer6 == 'A' || answer6 == 'a' || answer6 == 'C' || answer6 == 'c' || answer6 == 'D' || answer6 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) 9.8 m/s²" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << " ============================================================" << endl;
                    // --- Question 7 ---
                    cout << "7. The energy of motion is known as:" << endl;
                    cout << "(A) Potential Energy\n(B) Kinetic Energy\n(C) Chemical Energy\n(D) Nuclear Energy" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer7;
                    cin >> answer7;
                    if (answer7 == 'B' || answer7 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer7 == 'A' || answer7 == 'a' || answer7 == 'C' || answer7 == 'c' || answer7 == 'D' || answer7 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) Kinetic Energy" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << " ============================================================" << endl;
                    // --- Question 8 ---
                    cout << "8. The Big Bang Theory explains the origin of:" << endl;
                    cout << "(A) Formation of Black holes\n(B) Origin of Life on Earth\n(C) Origin and expansion of the universe\n(D) Rotation of galaxies" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer8;
                    cin >> answer8;
                    if (answer8 == 'C' || answer8 == 'c')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer8 == 'B' || answer8 == 'b' || answer8 == 'A' || answer8 == 'a' || answer8 == 'D' || answer8 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (C) Origin and expansion of the universe" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << " ============================================================" << endl;
                    // --- Question 9 ---
                    cout << "9. A Light-Year is a unit of ?" << endl;
                    cout << "(A) Time\n(B) Distance\n(C) Speed\n(D) Light Intensity" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer9;
                    cin >> answer9;
                    if (answer9 == 'B' || answer9 == 'b')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer9 == 'A' || answer9 == 'a' || answer9 == 'C' || answer9 == 'c' || answer9 == 'D' || answer9 == 'd')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (B) Distance" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << " ============================================================" << endl;
                    // --- Question 10 ---
                    cout << "10. Which Planet has the strongest magnetic field in our solar system?" << endl;
                    cout << "(A) Earth\n(B) Mars\n(C) Saturn\n(D) Jupiter" << endl;
                    cout << "Enter Your Choice(A/B/C/D): ";
                    char answer10;
                    cin >> answer10;
                    if (answer10 == 'D' || answer10 == 'd')
                    {
                        cout << "Your Answer Is correct!" << endl;
                        score += 1; // Increment score.
                    }
                    else if (answer10 == 'B' || answer10 == 'b' || answer10 == 'C' || answer10 == 'c' || answer10 == 'A' || answer10 == 'a')
                    {
                        cout << "Your Answer Is Incorrect!" << endl;
                        cout << "Correct Option Was (D) Jupiter" << endl;
                    }
                    else
                    {
                        cout << "Invalid Input!" << endl;
                    }
                    cout << " ============================================================" << endl;
                    phyDone = true;
                } // end of else statement
                break;
            }
            case 5: // Quit
            {
                break;
            }
            default:
                cout << "Invalid Choice! Please select a valid section." << endl;
                break;
            } // End of switch statement
            // Automatically exit when all subjects done
            if (iqDone && engDone && csDone && phyDone)
            {
                // Displays Players final score
                cout << "Your score is: " << score << " Out of 40" << endl;
                if (score >= 30)
                {
                    // Congratulates the user if they score 30 or more
                    cout << "Excellent work, " << name << "! You have a strong grasp of the material." << endl;
                }
                else if (score >= 20 && score < 30)
                {
                    // Encourages the user if they score between 20 and 29
                    cout << "Good job, " << name << "! You have a decent understanding of the topics." << endl;
                }
                else
                {
                    // Motivates the user to improve if they score below 20
                    cout << "Keep trying, " << name << ". Practice makes perfect!" << endl;
                }
                section = 5; // Set section to 5 to exit the loop
            }
        } while (section != 5); // The loop continues as long as the user does not enter 5 to quit.

        // This block displays the score if the user quits manually before finishing all sections.
        if (!(iqDone && engDone && csDone && phyDone))
        {
            cout << "Your final score for this round is: " << score << " Out of 40" << endl;
            if (score >= 30)
            {
                cout << "Excellent work, " << name << "! You have a strong grasp of the material." << endl;
            }
            else if (score >= 20 && score < 30)
            {
                cout << "Good job, " << name << "! You have a decent understanding of the topics." << endl;
            }
            else
            {
                cout << "Keep trying, " << name << ". Practice makes perfect!" << endl;
            }
        }

        // Ask the user if they want to play again
        cout << "\t===========================================" << endl;
        cout << "\t     Do you want to try again? (Y/N)" << endl;
        cout << "\t===========================================" << endl;
        cout << "Your choice: ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y'); // Condition for the main game loop

    // Displays Thank you message to the user for playing the quiz
    cout << "Thank you for playing the quiz, " << name << "!" << endl;
    return 0; // Indicates that the program executed successfully.
}
