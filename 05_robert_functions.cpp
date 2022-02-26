/*
Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.
*/
#include <iostream>
using namespace std;
long hms_to_secs(int, int, int);                                                 // Declaring a Function
int main()
{
    long result;
    int hours, mins, secs;
    cout << "Hours: ";                                                            // Scanning Hours from the user
    cin >> hours;
    cout << "Minutes: ";                                                          // Scanning Minutes from the user
    cin >> mins;                                                                 
    cout << "Seconds: ";                                                          // Scanning Seconds from the user
    cin >> secs;                                                                  
    result = hms_to_secs(hours, mins, secs);                            // Passing out the user given values through a function
    cout << hours << ":" << mins << ":" << secs << " IN SECONDS is : " << result;
}

long hms_to_secs(int x, int y, int z)                                   // Defining the Function
{
    x *= 60 * 60;
    y *= 60;
    return x + y + z;
}