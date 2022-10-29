/*

Code: Polymorphism Example
File: practice1.cpp
Programmer: Zibrilyy | SHINONNN
Date: 27/10/2022

*/

/*

Mencoba konsep Polymorphism

*/


#include <iostream>
#include "practice1.h"
using namespace std;

int main()
{
    base *p, b;
    derived01 d1;
    derived02 d2;

    // point to base
    p = &b;
    p->vfunc();

    // point to derived01
    p = &d1;
    p->vfunc();

    // point to derived01
    p = &d2;
    p->vfunc();

    return 0;
}