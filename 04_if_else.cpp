/*
Write a program that takes the x – y coordinates of a point in the Cartesian plane and prints a
message telling either an axis on which the point lies or the quadrant in which it is found.
Sample lines of output:
(-1.0, -2.5) is in quadrant III
(0.0, 4.8) is on the y-axis
*/
#include <iostream>
using namespace std;

int main()
{
    int flag = 0;
    float x, y;
    cout << " Enter the X Coordinate: ";
    cin >> x;                                          // Scanning X Coordinate

    cout << " \nEnter the Y Coordinate: ";
    cin >> y;                                          // Scanning Y Coordinate

    if (x == 0 && y == 0)
    {
        cout << "The Given coordinates refer to Origin of Cartesian Plane";
        flag = 1;
    }
    if (flag == 0)
    {
        if (x == 0 || y == 0)                           // Condition for X = 0 or Y = 0
        {
            if (x == 0 && y > 0)                        // Condition for points on the Y-axis
                cout << "(" << x << "," << y << ")"
                     << "is on the Y-axis";
            else
                cout << "(" << x << "," << y << ")"     // Condition for points on the x-axis
                     << "is on the X-axis";
        }
        else                                            // Condition if X and Y both are non-zero points
        {
            if (x > 0 && y > 0)                         // Condition for Quadrant I
                cout << "(" << x << "," << y << ")"
                     << "is in Quadrant I";
            else if (x < 0 && y > 0)                    // Condition for Quadrant II
                cout << "(" << x << "," << y << ")"
                     << "is in Quadrant II";
            else if (x < 0 && y < 0)                    // Condition for Quadrant III
                cout << "(" << x << "," << y << ")"
                     << "is in Quadrant III";
            else                                        // Condition for Quadrant IV
                cout << "(" << x << "," << y << ")"
                     << "is in Quadrant IV";
        }
    }
}