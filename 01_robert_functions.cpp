/*
Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() function that gets a radius value from the user, calls circarea(), and displays the result
*/
#include <iostream>
#include <math.h>
using namespace std; 
const double pie = 3.14159;                                 // Declaring a Constant that will be used in formula

float area(float x)                                         // Declaring and Defining a Function named Area
{
    return pie * pow(x, 2);
}

int main()
{
    float radius;
    cout << "Enter the Radius of the Circle in Meter Square : ";
    cin >> radius;                                                        // Scanning the Value of Radius from the user
    cout << "The Area of the circle of Radius " << radius << " Meters is : " << area(radius)<<" M^2";
}