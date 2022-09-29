#pragma once

class Car
{
protected:
    bool isIgnitionOn;
    int speed;
    int carId;
    int miles;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();

    //setter & getter
    int getCarId();
    void setCarId(int);

    int getCountMiles();
    void setCountMiles(const int);
};

// Inheritance class Car
class RaceCar : public Car
{
public:
    void setSpeed(int mph);
};
