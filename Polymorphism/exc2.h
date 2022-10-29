#pragma once
#include <iostream>
#define PI 3.14
using namespace std;

class shape
{
protected:
    float area;

public:
    virtual void calculateArea() = 0;

    shape()
    {
        this->area = 0;
    }

    void display()
    {
        cout << "Area is " << area;
    }
};

class circle : public shape
{
private:
    float radius;

public:
    circle(float x)
    {
        radius = x;
    }

    void calculateArea()
    {
        area = PI * radius * radius;
    }

    void displayCirc()
    {
        cout << " Circle Area" << endl;
        cout << "===============" << endl;
        cout << "Radius is " << radius << endl;
    }

    void display()
    {
        cout << "Area of Circle is " << area << endl;
    }
};

class rectangle : public shape
{
private:
    float lenght;
    float breadth;

public:
    rectangle(float x, float y)
    {
        lenght = x;
        breadth = y;
    }

    void calculateArea()
    {
        area = lenght * breadth;
    }

    void displayRect()
    {
        cout << " Rectangle Area" << endl;
        cout << "==================" << endl;
        cout << "Lenght is " << lenght << endl;
        cout << "Breadth is " << breadth << endl;
    }

    void display()
    {
        cout << "Area of Rectangle is " << area << endl;
    }
};