/*Write a program that will find the smallest, largest, and average values in a collection of
N numbers. Get the value of N before scanning each value in the collection of N numbers*/

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n, i, sum = 0, avg, small, greatest;
    cout << "How many numbers are there in your series? : ";
    cin >> n;
    for (i = 0; i < n; i++)                       //For scanning purpose
    {
        cin >> a[i];
    }
    cout << "The series you entered is: ";
    for (i = 0; i < n; i++)                      //For printing purpose
    {
        cout << a[i] << " ";
    }

    for (i = 0; i < n; i++)                     // Finding the sum of the Numbers in a Series
    {
        sum += a[i];
    }
    avg = sum / n;                              //Finding the average of series and also printing it on screen
    cout << "\nAverage of the Series is: " << avg;

    small = a[0];                              // Assuming first element of array as the smallest
    for (i = 0; i < n; i++)                    // Initialising a loop in order to find if my assumpion is correct
    {
        if (small > a[i])                      // Comparing assumed smallest value with other elements
        {
            small = a[i];
        }
    }
    cout << "\nThe Smallest Number in the series is: " << small; //Prinitng out the smallest Number of the series

    greatest = a[0];                           // Assuming first element of array as the Greatest
    for (i = 0; i < n; i++)                    // Initialising a loop in order to find if my assumpion is correct
    {
        if (greatest < a[i])                   // Comparing assumed smallest value with other elements
        {
            greatest = a[i];
        }
    }
    cout << "\nThe Greatest Number in the series is: " << greatest;  //Prinitng out the Greatest Number of the series
}