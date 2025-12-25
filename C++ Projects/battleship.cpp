#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

struct Player
{
    string name;
    char grid[ROWS][COLS];
    char guessGrid[ROWS][COLS];
    int hits;
    int misses;
    int shipsRemaining;
};

void initializeBoard(Player *p, string playerName);
void displayBoard(char board[ROWS][COLS], bool showShips);
void placeShips(Player *p);
bool attack(Player *attacker, Player *defender, int r, int c);
void saveGameStats(Player p1, Player p2, string winner);

int main()
{
    Player p1, p2;
    cout << "========================================" << endl;
    cout << "          BATTLESHIP SIMULATOR      " << endl;
    cout << "========================================" << endl;

    initializeBoard(&p1, "Player 1");
    initializeBoard(&p2, "Player 2");

    cout << "\n[SETUP] " << p1.name << ", get ready to place ships." << endl;
    system("pause");
    placeShips(&p1);
    system("cls");
    cout << "\n[SETUP] " << p2.name << ", get ready to place ships." << endl;
    system("pause");
    placeShips(&p2);
    system("cls");

    bool gameOver = false;
    int turn = 1;
    string winnerName = "";
    while (!gameOver)
    {
        Player *current = (turn == 1) ? &p1 : &p2;
        Player *enemy = (turn == 1) ? &p2 : &p1;
        cout << "\n---------------------------------" << endl;
        cout << " TURN: " << current->name << endl;
        cout << "---------------------------------" << endl;
        cout << "RADAR (Enemy Waters):" << endl;
        displayBoard(current->guessGrid, false);

        int r, c;
        cout << "Enter Attack Coordinates (Row 0-4) and (Col 0-4): ";
        cin >> r >> c;

        if (r >= 0 && r < ROWS && c >= 0 && c < COLS)
        {
            bool hit = attack(current, enemy, r, c);
            if (hit)
            {
                cout << ">>> DIRECT HIT! <<<" << endl;
                if (enemy->shipsRemaining == 0)
                {
                    gameOver = true;
                    winnerName = current->name;
                }
            }
            else
            {
                cout << ">>> MISS! <<<" << endl;
            }
        }
        else
        {
            cout << "Invalid Coordinates! Turn Lost." << endl;
        }

        if (!gameOver)
        {
            cout << "\nEnd of turn. Switch players." << endl;
            system("pause");
            system("cls");
            turn = (turn == 1) ? 2 : 1;
        }
    }

    cout << "\n*********************************" << endl;
    cout << "        GAME OVER! Winner: " << winnerName << endl;
    cout << "*********************************" << endl;

    saveGameStats(p1, p2, winnerName);
    return 0;
}

void initializeBoard(Player *p, string playerName)
{
    p->name = playerName;
    p->hits = 0;
    p->misses = 0;
    p->shipsRemaining = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            p->grid[i][j] = '~';
            p->guessGrid[i][j] = '.';
        }
    }
}
void displayBoard(char board[ROWS][COLS], bool showShips)
{
    cout<<"  ";
    for(int i = 0; i < COLS; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << i << " ";
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == 'S' && !showShips)
            {
                cout << "~ ";
            }
            else
            {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void placeShips(Player *p)
{
    int shipsToPlace = 3;

    while (shipsToPlace > 0)
    {
        displayBoard(p->grid, true);
        cout << "Ships remaining to place: " << shipsToPlace << endl;
        cout << "Enter Coordinate (Row Col): ";
        int r, c;
        cin >> r >> c;

        if (r >= 0 && r < ROWS && c >= 0 && c < COLS)
        {
            if (p->grid[r][c] == '~')
            {
                p->grid[r][c] = 'S';
                p->shipsRemaining++;
                shipsToPlace--;
                cout << "Ship Placed!" << endl;
            }
            else
            {
                cout << "ERROR: There is already a ship there!" << endl;
            }
        }
        else
        {
            cout << "ERROR: Coordinates out of bounds!" << endl;
        }
    }
}

bool attack(Player *attacker, Player *defender, int r, int c)
{
    if (defender->grid[r][c] == 'S')
    {
        attacker->hits++;
        defender->grid[r][c] = 'X';
        attacker->guessGrid[r][c] = 'X';
        defender->shipsRemaining--;
        return true;
    }
    else
    {
        attacker->misses++;
        attacker->guessGrid[r][c] = 'O';
        return false;
    }
}
void saveGameStats(Player p1, Player p2, string winner)
{
    ofstream outFile;
    outFile.open("battleship_stats.txt", ios::app);

    if (outFile.is_open())
    {
        outFile << "-----------------------------" << endl;
        outFile << "GAME RESULT: " << winner << " Won!" << endl;
        outFile << p1.name << " -> Hits: " << p1.hits << " | Misses: " << p1.misses << endl;
        outFile << p2.name << " -> Hits: " << p2.hits << " | Misses: " << p2.misses << endl;
        outFile << "-----------------------------" << endl;
        outFile.close();
        cout << "Stats successfully saved to 'battleship_stats.txt'." << endl;
    }
    else
    {
        cout << "Error: Could not save game stats." << endl;
    }
}