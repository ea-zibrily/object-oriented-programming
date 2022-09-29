/*

Code: Inheritance Example
File: example.cpp
Programmer: Zibrilyy | SHINONNN
Date: 28/09/2022

*/

/*

Mencoba konsep Inheritance

*/

#include <iostream>
#include "example.h"
using namespace std;

void Car::showCar()
{
    if (isIgnitionOn)
        cout << "Ignition is on. ";
    else
        cout << "Ignition is off. ";
    cout << "Speed is " << speed << endl;
}

void Car::turnIgnitionOn()
{
    isIgnitionOn = true;
}

void Car::turnIgnitionOff()
{
    speed = 0;
    isIgnitionOn = false;
}

void Car::setSpeed(int mph)
{
    const int STD_LIMIT = 65;
    if (isIgnitionOn)
        if (mph <= STD_LIMIT)
            speed = mph;
        else
            speed = STD_LIMIT;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

// Inheritance class Car pada class Convertible
void Convertible::putTopUp()
{
    isTopUp = true;
}

void Convertible::putTopDown()
{
    isTopUp = false;
}

void Convertible::showCar()
{
    Car::showCar();
    if (isTopUp)
        cout << "Top is up." << endl;
    else
        cout << "Top is down." << endl;
}

int main()
{
    Convertible myCar;

    myCar.turnIgnitionOn();
    myCar.setSpeed(35);
    myCar.putTopDown();
    myCar.showCar();
    myCar.setSpeed(70);
    myCar.showCar();
    myCar.putTopUp();
    myCar.turnIgnitionOff();
    myCar.showCar();

    return 0;
}