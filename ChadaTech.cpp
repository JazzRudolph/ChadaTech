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

void clock12(int hour, int minute, int second, char ampm); // This will display 12hrclock
void clock24(int hour, int minute, int second); // This will display 24hrclock


int main() 
{
    
    int userMenu; // This will store the users menu choices
    int userInput; // This will store the users time input
    int hour = 0; // This will store the hour value
    int minute = 0; // This will store the minute value
    int second = 0; // This will store the second value
    char ampm; // This will store the AM or PM values



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

    while (ampm != 'A' && ampm != 'P' && ampm != 'a' && ampm != 'p') {
        cout << "Enter AM or PM (a/p): ";
        cin >> ampm;
    }

    clock12(hour, minute, second, ampm); // This will call the 12hr clock function
    clock24(hour, minute, second); // This will call the 24hr clock function
    
    return 0;
}



void clock12 (int hour, int minute, int second) { // This will display the 12hr clock
    if (ampm == 'A' || ampm == 'a') { // This will display the 12hr clock with AM
        cout << "12-Hour Clock" << hour << ':' << minute << ':' << second << " AM" << endl;
    } else if(ampm == 'P' || ampm == 'p') { // this will display the 12hr clock with PM
        cout << "12-Hour Clock: " << hour << ':' << minute << ':' << second << " PM" << endl;

    }
}
    

void clock24 (int hour, int minute, int second) { // This will display the 24hr clock
  cout << "24-Hour Clock" << hour << ':' << minute << ':' << second << endl;
}

