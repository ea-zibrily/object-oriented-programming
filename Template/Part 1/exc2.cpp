/*

Code: Template 1 Example
File: exc2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 06/11/2022

*/

/*

Mencoba konsep Template dengan 2 tipe class

*/

#include <iostream>
using namespace std;

// function template class T
template <class T, class U>
T getMax(T a, U b)
{
    cout << "first number is " << a << endl;
    cout << "second number is " << b << endl;

    return (a > b) ? a : b;
}

int main()
{
    int i, j;
    long l;

    j = 6;
    l = 10;

    i = getMax<int>(j, l);
    cout << "getMax number is " << i << endl;

    return 0;
}