#pragma once

class Car
{
protected:
    bool isIgnitionOn;
    int speed;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();
};

//Inheritance class 1 Car
class Convertible : virtual public Car
{
protected:
    bool isTopUp;

public:
    void putTopUp();
    void putTopDown();
    void showCar();
};

// Inheritance class 2 Car
class RaceCar : virtual public Car
{
public:
    void setSpeed(int mph);
};