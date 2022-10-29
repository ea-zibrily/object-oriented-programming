#pragma once
#include <iostream>
using namespace std;

class shape
{
public:
    //draw() is a pure virtual function
    virtual void draw() = 0;

};

class circle : public shape
{
public:
    void draw()
    {
        cout <<"Drawing Circle.." << endl;
    }

};

class rectangle : public shape
{
public:
    void draw()
    {
        cout <<"Drawing Rectangle.." << endl;
    }

};

