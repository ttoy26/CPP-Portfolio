//Tromaine Toy
//Distance Between Points
//Calculates the distance of the line between two points when given the coordinates of the points

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declaring variables
    int x1;
    int y1;
    int x2;
    int y2;
    double distance;

    //Get user input for the x and y coordinates for both points
    cout << "Enter the x-coordinate of point 1: ";
    cin >> x1;
    cout << "Enter the y-coordinate of point 1: ";
    cin >> y1;
    cout << "Enter the x-coordinate of point 2: ";
    cin >> x2;
    cout << "Enter the y-coordinate of point 2: ";
    cin >> y2;

    //Calculate the distance between the points
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //Output results
    cout << "The distance of the line between points (" << x1 << ", " << y1
        << ") and (" << x2 << ", " << y2 << ") is " << distance << endl;

    return 0;
}
