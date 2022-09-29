/*

Code: Overloaded Operator Example
File: example.cpp
Programmer: Zibrilyy | SHINONNN
Date: 29/09/2022

*/

/*

Mencoba konsep Operator Overloaded

*/

#include <iostream>
#include <string.h>
#include "example.h"
using namespace std;

salesOffice::salesOffice(string office, double salesAmt)
{
    officeName = office;
    sales = salesAmt;
}

double salesOffice::operator/(salesOffice salOffice)
{
    double ratio;
    ratio = sales / salOffice.sales;
    return ratio;
}

int main()
{
    // deklarasi variabel
    salesOffice north("North", 245.88);
    salesOffice south("South", 2830.92);
    double ratio;

    ratio = north / south;
    cout << "The North Office has " << (ratio * 100) << "% "
         << "of the sales of South Office" << endl;
    return 0;
}