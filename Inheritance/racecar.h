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

// Inheritance class Car
class RaceCar : public Car
{
public:
    void setSpeed(int mph);
};
