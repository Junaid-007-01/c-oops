/*Modify your program to compute and display both the range of values in the data
collection and the standard deviation of the data collection. To compute the standard
deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the
main loop. After loop exit, use the formula
    STANDARD DEVIATION = sqrt((sum_squares/N)-average^2)*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[100];
    int n, i;
    float avg,std_dev,sum = 0.0,sum_square = 0.0;
    cout << "How many numbers are there in your series? : ";
    cin >> n;
    for (i = 0; i < n; i++)                       //For scanning purpose
    {
        cin >> a[i];
    }
    cout << "The series you entered is: ";
    for (i = 0; i < n; i++)                      //For printing purpose
    {
        cout << a[i] << " ";
    }

    for (i = 0; i < n; i++)                     // Finding the sum of the Numbers in a Series
    {
        sum += a[i];
    }
    avg = sum / n;                              //Finding the average of series and also printing it on screen
    cout << "\nAverage of the Series is: " << avg;

    for(i=0; i<n;i++)                           // Initialising For loop as per Question Requirment
    {
      sum_square += (a[i]*a[i]);                // Finding the sum of squares of elements
    }
    std_dev = sqrt(((sum_square/n)-pow(avg,2)));             //Using Formula given in the Question
    cout << "\nThe standard Deviation calculated is: "<< std_dev ;
}