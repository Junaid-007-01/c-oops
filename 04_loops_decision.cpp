/*
Write a program to process a collection of daily high temperatures. Your program should
count and print the number of hot days (high temperature 85 or higher), the number of
pleasant days (high temperature 60–84),and the number of cold days (high temperatures
less than 60). It should also display the category of each temperature. Test your program
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59
*/
#include <iostream>
using namespace std;

int main()
{
    int temp[26] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int high_temp[20], normal_temp[20], cold_temp[20];
    int i, j, k, count = 0, count1 = 0, count2 = 0;
    float sum=0.0, avg_temp;
    for (i = 0; i < 26; i++, j = 0)                 // Initialising a loop for Hot days
    {
        if (temp[i] >= 85)                          // Using given condition for hot days
        {

            for (j = count; j <= count; j++)        // Intilialising a loop to store the Hot days as Array elements
                high_temp[j] = temp[i];
            count++;                                // Using count to record the number of hot days
        }

        else if (temp[i] >= 60 && temp[i] < 85)     // Using Given condition for Pleasant days
        {
            for (j = count1; j <= count1; j++)      // Intilialising a loop to store the Pleasant days as Array elements
                normal_temp[j] = temp[i];
            count1++;
        }

        else                                         // If the above conditions fail to meet, it automatically gets processed here
        {
            for (j = count2; j <= count2; j++)       // Intilialising a loop to store the Cold days as Array elements
                cold_temp[j] = temp[i];
            count2++;
        }
    }

    // Printing the NUmber and Elements of Hot days
    cout << "No of Hot days are " << count;
    cout << "\nThe Temperature falling in Hot days Range are: ";
    for (i = 0; i < count; i++)
    {
        cout << high_temp[i] << " ";
    }

    // Printing the Number and Elements of Pleasant days
    cout << "\nNo of Pleasant days are " << count1;
    cout << "\nThe Temperature falling in Pleasant days Range are: ";
    for (i = 0; i < count1; i++)
    {
        cout << normal_temp[i] << " ";
    }

    // Printing the Number and Elements of Cold days
    cout << "\nNo of Cold days are " << count2;
    cout << "\nThe Temperature falling in Cold days Range are: ";
    for (i = 0; i < count2; i++)
    {
        cout << cold_temp[i] << " ";
    }


    // Finding the Average of Temperatures
    for (i = 0; i < 26; i++)
    {
     sum += temp[i];

    }
    avg_temp = sum / 26;
    cout << "\nThe Average of given Temperature Series is: "<< avg_temp;


}
