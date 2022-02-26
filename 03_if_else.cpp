/*
The National Earthquake Information Center has asked you to write a program implementing the
following decision table to characterize an earthquake based on its Richter scale number.
Richter Scale Number (n)                     Characterization
n < 5.0                                      Little or no damage
5.0<=n< 5.5                                  Some damage
5.5<=n< 6.5                                  Serious damage: walls may crack or fall
6.5<=n< 7.5                                  Disaster: houses and buildings may collapse
higher                                       Catastrophe: most buildings destroyed
Could you handle this problem with a switch statement? If so, use a switch statement; if not,
explain Why?
*/
#include<iostream>
using namespace std;

int main()
{
    float richter_scale;
    cout<< "Enter the Range of Earthquake based on Richter Scale: ";
    cin >> richter_scale;                                             //Scanning Ritcher Scale Range of Earthquake

    // Using Conditional statements to Evauate the Output  
    if(richter_scale < 5.0)                                           
    cout<< "\nLittle or No Damage";
    else if(richter_scale >= 5.0 && richter_scale< 5.5)
    cout<<"\nLittle or No Damage";
    else if(richter_scale >= 5.5 && richter_scale< 6.5)
    cout<<"\nSome Damage";
    else if(richter_scale >= 6.5 && richter_scale< 7.5)
    cout<<"\nDisaster: houses and buildings may collapse";
    else
    cout<<"\nCatastrophe: most buildings destroyed";




}