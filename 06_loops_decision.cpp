/*
Suppose you give a dinner party for six guests, but your table seats only four. In how many
ways can four of the six guests arrange themselves at the table? Any of the six guests can
sit in the first chair. Any of the remaining five can sit in the second chair. Any of the
remaining four can sit in the third chair, and any of the remaining three can sit in the fourth
chair. (The last two will have to stand.) So the number of possible arrangements of six
guests in four chairs is 6*5*4*3, which is 360. Write a program that calculates the number
of possible arrangements for any number of guests and any number of chairs. (Assume
there will never be fewer guests than chairs.) Don’t let this get too complicated. A simple
for loop should do it.
*/

#include<iostream>
using namespace std;

int main()
{
    int i, chairs, guests, pss_arrg = 1;
    cout<<"Enter the Number of Chairs Available: ";                              // Getting the Number of Chairs from the user
    cin >> chairs ;
    cout<<"\nEnter the Number of Guests that need to be seated on those chairs: "; // Getting the Number of Guests from the user
    cin >> guests ;
    for(i=1; i<= chairs; i++)                                         // Initialising a Loop to find for Possible Arrangments
       {
        pss_arrg *= guests;
        guests--;     //Decrementing The Number of Guests every time a Possiblity of sitting at a particular Chair gets exhuasted 
       }
    
    // Printing the Possible Arrangments
    cout<< "\nThe Possible arrangments for the Given Number of Guests and Chairs is: "<< pss_arrg; 

}