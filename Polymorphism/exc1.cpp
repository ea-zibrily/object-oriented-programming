/*

Code: Polymorphism Example
File: practice2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 27/10/2022

*/

/*

Mencoba konsep Polymorphism

*/



#include <iostream>
#include "exc1.h"
using namespace std;

int main()
{
    //deklarasi class var
    //abc obj1; //eror
    xyz obj2;

    //obj1.func();
    obj2.func();

    return 0;

    //<summary>
    //code mengalami eror karena pada var obj1
    //akan memanggil func "func" pada class abc
    //yang tidak memiliki nilai sama sekali.
    //====
    //code akan berjalan jika hanya memanggil class xyz saja
    //</summary>s

}