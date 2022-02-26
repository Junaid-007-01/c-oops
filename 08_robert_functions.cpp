/*
Write a function called swap() that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments. Create a main() program to exercise the function.
*/

#include <iostream>
using namespace std;
int swap(int &a, int &b)                      // Declaring and Defining a function named Swap
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;                                    
    cout << "Enter the Value to put in X: ";
    cin >> x;                                               // Scanning the Value of X
    cout << "Enter the Value to put in Y: ";
    cin >> y;                                               // Scanning the Value of Y
    swap(x, y);                                           // Passing the arguments through the Function
    cout << "After Swapping the Value of X : " << x;
    cout << "\nAfter Swapping the Value of Y : " << y;
}