/*
Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function
*/
#include <iostream>
using namespace std;

int zerosmaller(int &x, int &y)         // Declaring and Defining a Function which sets the smaller Number to 0
{
    if (x > y)
    {
        y = 0;
        return x;
        return y;
    }
    else
    {
        x = 0;
        return x;
        return y;
    }
}

int main()
{
    int a, b;
    cout << "Enter Number to be Assigned to Variable A: ";
    cin >> a;                                                  // Scanning First Number
    cout << "Enter Number to be Assigned to Variable B: ";
    cin >> b;                                                  // Scanning Second Number
    zerosmaller(a, b);                                             // Passing the Arguments throught the function
    cout << "After Passsing the arguments through Function ";
    // Printing the Result/Answer
    cout << "\nThe Value in A: " << a;
    cout << "\nThe Value in B: " << b;
}