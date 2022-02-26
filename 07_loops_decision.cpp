/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
*/
#include <iostream>
using namespace std;
int main()
{
    int x, i, j;              
    cout << "Enter no.of Rows: ";         
    cin >> x;                            // Asking user for the Number of Rows upto which Pattern is to be printed
    for (i = 0; i < x; i++)              // Controls the Rows
    {
        for (j = 0; j <= i; j++)         // Controls the Column
        {
            cout << "X";
        }
        cout << "\n";                     // Using Escape Sequence to Change the Line after each Row Processing
    }
}