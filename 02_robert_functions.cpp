/*
Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. Write a main() function that gets values from the user to test this function
*/
#include <iostream>
using namespace std;
double result = 1.0;

double power(double x, int y)                            // Declaring and Defining a Fucnction
{
    double i;
    for (i = 1; i <= y; i++)                             // Initialising a Loop according to Requirment
    {
        result = result * x;
    }
    return result;
}

int main()
{
    int p, choice;
    double n, answer;
    cout << "Input the Number: ";                         // Scanning a Number from the user
    cin >> n;
    cout << "Press '1' for non-2 power OR any other key for 2 power only: ";
    cin >> choice;                                        // Obtaining a Choice from User
    if (choice == 1)                                      // Based on the Choice executing the particular instruction
    {
        cout << "How many times should this Number be multiplied to itself: ";
        cin >> p;
        answer = power(n, p);
        cout << "Answer: " << answer;
    }
    else                                                  // Condition for Raising the number with 2
    {
        answer = n * n;
        cout << "Answer: " << answer;
    }
}
