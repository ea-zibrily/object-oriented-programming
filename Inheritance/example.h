#pragma once

class Car
{
private:
    bool isIgnitionOn;
    int speed;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();
};

//Inheritance class Car
class Convertible : public Car
{
private:
    bool isTopUp;

public:
    void putTopUp();
    void putTopDown();
    void showCar();
};