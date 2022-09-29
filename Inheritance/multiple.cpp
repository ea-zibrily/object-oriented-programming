/*

Code: Inheritance Example
File: multiple.cpp
Programmer: Zibrilyy | SHINONNN
Date: 28/09/2022

*/

/*

Mencoba konsep Inheritance

*/

#include <iostream>
#include "mutiple.h"
using namespace std;

class ConvertibleRaceCar : public Convertible, public RaceCar
{
    
};


int main()
{
    ConvertibleRaceCar aCar;
    
    aCar.turnIgnitionOn();
    aCar.setSpeed(30);
    cout << "Car at 30 mph: ";
    aCar.showCar();
    aCar.putTopDown();
    aCar.setSpeed(80);
    cout << "Car at 80 mph with top down: ";
    aCar.showCar();
    aCar.putTopUp();
    aCar.setSpeed(210);
    cout << "Car at 210 mph with top up: ";
    aCar.showCar();
    
    return 0;
}