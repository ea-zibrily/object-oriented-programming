#pragma once
#include <iostream>
using namespace std;

class base
{
public:
    //<summary>
    //klo gapake virtual, semua var yg alamatnya ke base, nilainya bakal sama
    //</summary>
    
    virtual void vfunc()
    {
        cout << "This is base's vfunction().\n";
    }
};

class derived01 : public base
{
public:
  void vfunc()
    {
        cout << "This is derived01's vfunction().\n";
    }
};

class derived02 : public base
{
public:
  void vfunc()
    {
        cout << "This is derived02's vfunction().\n";
    }
};