/*

Code: Template 1 Practice
File: circleArea.cpp
Programmer: Zibrilyy | SHINONNN
Date: 06/11/2022

*/

/*

Create a function template named circleArea(). The function receives a
parameterized argument representing the radius of a circle, and returns a double
representing the circle’s area. (The area is computed as 3.14 multiplied by the radius
squared.) Write a main() function that demonstrates that the function works correctly
with either an integer or a double argument. Save the file as CircleArea.cpp.

*/

#include <iostream>
#define PI 3.14
using namespace std;

template <class T>
T circleArea(T radius)
{
    double areaCount;
    areaCount = PI * radius * radius;

    return areaCount;
}

int main()
{
    float circleRadius, circleAreaCount;
    
    cout << "Circle Area Calculate" << endl;
    cout << "---------------------" << endl;

    cout << "Enter a Radius ";
    cin >> circleRadius;

    circleAreaCount = circleArea<float>(circleRadius);
    cout << "Circle Area is " << circleAreaCount << endl;


    return 0;
}