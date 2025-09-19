/*
Project 1: Chada Tech
9/16/2025
Jazz Rudolph*\ 

This project will simulate two clocks that will meet the international standard ISO 8601 and display the 12-hour and 24-hour time formats based on the users input.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() 
{
    
    char colon; // This adds the : between the time values
    int clock12; // This will store the 12hr clock
    int clock24; // This will store the 24hr clock
    int userMenu; // This will store the users menu choices
    int userInput; // This will store the users time input


    int hour = 0; // This will store the hour value
    int minute = 0; // This will store the minute value
    int second = 0; // This will store the second value
    int ampm; // This will store the AM or PM values




    while (hour < 1 || hour > 12) { // This will store the users time input
        cout << "Enter hour";
        cin >> hour;
    } 

    while (minute < 0 || minute > 59) { // This will store the users time input
        cout << "Enter minute";
        cin >> minute;
    }
    
    while (second < 0 || second > 59) { // This will store the users time input
        cout << "Enter second";
        cin >> second;
    }

    return 0;

}
