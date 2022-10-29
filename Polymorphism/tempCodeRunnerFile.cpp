/*

Code: Polymorphism Practice 1
File: exc2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 27/10/2022

*/

/*

Mencoba konsep Polymorphism

*/

#include <iostream>
#include "exc2.h"
using namespace std;

int main()
{
    shape *p;
    circle C1(5);
    rectangle R1(4,6);

    p = &C1;
    C1.displayCirc();
    p->calculateArea();
    p->display();

    cout << endl;
    cout << endl;
    
    p = &R1;
    R1.displayRect();
    p->calculateArea();
    p->display();

    return 0;

}