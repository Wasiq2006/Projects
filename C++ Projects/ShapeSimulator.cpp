#include <iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        cout << "+----------------------------------------------+" << endl;
        cout << "|                                              |" << endl;
        cout << "|              Shape Simulator                 |" << endl;
        cout << "|                                              |" << endl;
        cout << "+----------------------------------------------+" << endl;
        cout << "\t\t     Menu" << endl;
        cout << "1. Right Angle Triangle\t 2. Rectangle" << endl;
        cout << "3. Diamond \t         4. Triangle" << endl;
        cout << "5. Circle \t         6. Heart Shape" << endl;
        cout << "7. Clear Screen \t 8. Exit" << endl;
        cout << "Enter Your Choice(1-8): ";
        cin >> choice;
        cout << "\n==================================================\n"
             << endl;
        switch (choice)
        {
        case '1':
            for (int i = 1; i <= 10; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        case '2':
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 20; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        case '3':
            for (int i = 1; i <= 10; i++)
            {
                for (int j = i; j < 10; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 10 - 1; i >= 1; i--)
            {
                for (int j = i; j < 10; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        case '4':
            for (int i = 1; i <= 10; i++)
            {
                for (int j = i; j < 10; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case '5':
            for (int i = 0; i <= 6; i++)
            {
                for (int j = 0; j <= 6; j++)
                {
                    if ((i - 3) * (i - 3) + (j - 3) * (j - 3) <= 9)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        case '6':
            for (int i = 12 / 2; i <= 12; i += 2)
            {
                for (int j = 1; j < 12 - i; j += 2)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                for (int j = 1; j <= 12 - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = 12; i >= 1; i--)
            {
                for (int j = i; j < 12; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= (i * 2) - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        case '7':
            system("cls");
            break;
        case '8':
            cout << "\tExiting Shape Simulator. Goodbye!" << endl;
        default:
            if (choice < '1' || choice > '8')
            {
                cout << "Invalid Choice! Please select a valid option." << endl;
            }
            cout << "\n==================================================" << endl;
            break;
        }
    } while (choice != '8');
    return 0;
}
