/*

Code: Inheritance Example
File: racecar.cpp
Programmer: Zibrilyy | SHINONNN
Date: 28/09/2022

*/

/*

Mencoba konsep Inheritance

*/

#include <iostream>
#include "racecar.h"
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

// Inheritance class Car pada class RaceCar
void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    if (isIgnitionOn)
        if (mph <= MAX_SPEED)
            speed = mph;
        else
            speed = MAX_SPEED;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

int main()
{
    Car aCar;
    RaceCar aRaceCar;

    aCar.turnIgnitionOn();
    aCar.setSpeed(80);
    cout << "Car at 80 mph: ";
    aCar.showCar();
    aRaceCar.turnIgnitionOn();
    aRaceCar.setSpeed(80);
    cout << "Race car at 80 mph: ";
    aRaceCar.showCar();
    return 0;
}