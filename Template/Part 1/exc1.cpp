/*

Code: Template 1 Example
File: exc1.cpp
Programmer: Zibrilyy | SHINONNN
Date: 06/11/2022

*/

/*

Mencoba konsep Template dengan satu tipe class

*/

#include <iostream>
using namespace std;

// function template class T
template <class T>
T getMax(T a, T b)
{
    T result;
    cout << "first number is " << a << endl;
    cout << "second number is " << b << endl;
    result = (a > b) ? a : b;
    return result;
}

int main()
{
    int i, j, k;
    long l, m, n;

    i = 5;
    j = 6;
    l = 10;
    m = 5;

    k = getMax<int>(i, j);
    cout << "getMax number is " << k << endl;

    cout << "=====================" << endl;

    n = getMax<int>(l, m);
    cout << "getMax number is " << n << endl;

    return 0;
}