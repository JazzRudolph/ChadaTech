/*
Project 1: Chada Tech
9/16/2025
Jazz Rudolph*\ 

This project will simulate two clocks that will meet the international standard ISO 8601 and display the 12-hour and 24-hour time formats based on the users input.
*/

iostream
#include <iomanip>
#include <string>
#include <double>

using namespace std;
int main() 
{
    int hours, minutes, seconds; // This will store the time values
    char colon; // This adds the : between the time values
    int clock12; // This will store the 12hr clock
    int clock24; // This will store the 24hr clock
    int ampm; // This will store the AM or PM values
    int userMenu; // This will store the users menu choices
    int userInput; // This will store the users time input

    int time(int hours, minutes, seconds); // This will store the users time input
    int clock1() {
        cout << "12-Hour Clock" << endl;
        // This will display the 12-hour clock

    }

    int clock2() {
        cout << "24-Hour Clock" << endl;
        // This will display the 24-hour clock
    }

    int userMenu(int userInput) { // This will display the users menu choices
        cout << "1-Add One Hour" << endl;
        cout << "2-Add One Minute" << endl;
        cout << "3-Add One Second" << endl;
        cout << "4-Exit Program" << endl;
        cin >> userMenu;
        return userMenu;
    }

}
