#pragma once
#include <iostream>
using namespace std;

class abc
{
public:
    virtual void func() = 0;
};

class xyz : public abc
{
public:
    void func()
    {
        cout << "This is Function of xyz" << endl;
    }
};
