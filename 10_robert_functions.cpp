/*
Write a function that, when you call it, displays a message telling how many times it has
been called: “I have been called 3 times”, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can’t you use a local variable?
*/
#include <iostream>
using namespace std;
// Declaring a Global Variable
int count = 0;
// Declarng a function which uses Global Variable to count the Number of times the function was called upon
int times(int x)
{
    count++;
    cout << "\nThe function was called " << count << " times";
}
// Declarng a function which uses Static Local Variable to count the Number of times the function was called upon
int statictimes(int x)
{
    static int count1 = 0;
    count1++;
    cout << "\nThe function was called " << count1 << " times";
}
// Declaring a function which uses Local Variable to count the Number of times the function was called upon
int localtimes(int x)
{
    int count2 = 0;
    count2++;
    cout << "\nThe function was called " << count2 << " times";
}

int main()
{
    int x, type, i;
    cout << "Enter the no. of times you want the function to be called:";
    cin >> x;
    cout << "Press '1' For Function with Global Variable to count";
    cout << "\nPress '2' For Function with Static Variable to count";
    cout << "\nPress '3' For Function with Local Variable to Count";
    cout <<"\nYour Answer: ";
    cin >> type;
    // Using switch statement to choose between user entered option
    switch (type)                                       
    {
    case 1:
        // Loop for Function using Global Variable to Count
        for (i = 0; i < x; i++)
        {
            times(x);
        }
        break;

    case 2:
        // Loop for Function using Static Variable to Count
        for (i = 0; i < x; i++)
        {
            statictimes(x);
        }
        break;

    case 3:
        // Loop for Function using Local Variable to Count
        for (i = 0; i < x; i++)
        {
            localtimes(x);
        }
    }
}

/*
Which is more appropriate?
ANS: The second one where we have to use static local variable to count is the appropriate one. The reason being, since the variable is static local( have a lifetime that lasts until the end of the program.) and has a scope in that particular function only, the value of that varibale cannot be altered by anything outside that function.
While if we use the Global Variable, altough it does the job but it can be alterd by other functions as well resulting in wrong counting.

Why can’t you use a local variable?
Local Variable cannot be used as it forgets its value everytime a function is called. It will again start coutning form 0.
*/