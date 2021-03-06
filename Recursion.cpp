/*
Write and test a recursive function that returns the value of the following recursive
definition:
f ( x ) = 0 if x = 0
f ( x ) = f ( x -1) + 2 otherwise
What set of numbers is generated by this definition?
*/
#include <iostream>
using namespace std;

int fxn(int);                  // Defining a Function

int main()
{
    int x, i, d;                                         // Declaring Three Integer Variables
    cout << "Enter a Number: ";                          // Giving and Output instruction
    cin >> x;                                            // Scanning the number which user will input using keyboard
    for(i= 0; i<= x; i++)                                /* Initialising a loop so that a series can be generated
                                                            upto the user given number */
    {                                                      
        d = fxn(i);                                      /* Taking the Values in a new Variable and side by side Printing them on 
                                                           the screen */
        cout << d << " " ;
    }
}

int fxn(int y)                  // Describing the function
{
    if (y == 0)                         // For refrence purpose, evrytime the value inside the fxn is 0, the fxns returns 0 as answer
        return 0;
    else
        return fxn(y - 1) + 2;          /* If the Value given by user is other than 0, then this recursive process is carried
                                           out until a soultion is returned */
}