/*
Write a program that calculates the user’s body mass index (BMI) and categorizes it as
underweight, normal, overweight, or obese, based on the following table from the United States
Centers for Disease Control:
BMI                  Weight Status
Below 18.5           Underweight
18.5–24.9            Normal
25.0–29.9            Overweight
30.0 and above       Obese
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float weight, height, bmi;
    cout<< "Please Input your Weight in Kg's : ";                      
    cin>> weight;                                             // Scanning Weight from the user
    cout<< "\nPlease Input your height in Meters : ";
    cin>> height;                                             // Scanning Height from the user
    bmi = weight/pow(height,2);                               // Using Suitable formula calculating BMI

    // Using Conditional statements to print output on screen based on BMI range 
    if(bmi < 18.5)                                            
    cout<< "\nYou are Underweight";
    else if(bmi>=18.5 && bmi <=24.9)
    cout<< "\nYour Weight is Normal";
    else if(bmi >24.9 && bmi <= 29.9)
    cout<< "\nYou are Overweight";
    else
    cout<<"\nYou are Obese";






}