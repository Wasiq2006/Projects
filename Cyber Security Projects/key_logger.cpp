#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

struct key_logger
{
    char key;          // The Key Pressed
    string time_stamp; // for Time of Press
};

string get_time_Stamp()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    string timeStr(dt);
    timeStr.pop_back(); // Remove the newline character
    return timeStr;
}

void writelog(const key_logger &log)
{
    ofstream logfile("Keylog.txt", ios::app); // Append Mode
    if (logfile.is_open())
    {
        logfile << "Key: " << log.key << " | Time: " << log.time_stamp << endl;
        logfile.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
}

int main()
{
    char input;
    cout << "Simple Key Logger. Press 'q' to quit." << endl;
    while (true)
    {
        cout << "Press a Key:";
        cin >> input;
        if (input == 'q')
        { // Exit Condition
            break;
        }
        key_logger log;
        log.key = input;
        log.time_stamp = get_time_Stamp();
        writelog(log);
    }
    cout << "Key logging ended. Check Keylog.txt for logs." << endl;
    return 0;
}
