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
    circleRadius = 7;

    circleAreaCount = circleArea<float>(circleRadius);
    cout << circleAreaCount << endl;


    return 0;
}