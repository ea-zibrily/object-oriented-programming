/*

Code: Overloaded Operator Example 2 - Output Operator
File: example2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 29/09/2022

*/

/*

Mencoba konsep Operator Overloaded menggunakan Output Operator

*/

#include <iostream>
#include <string.h>
#include "example2.h"
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

ostream &operator<<(ostream &out, const salesOffice &anOffice)
{
    out << "The " << anOffice.officeName << " Office sold $" << anOffice.sales << endl;

    return out;
}

int main()
{
    // deklarasi variabel
    salesOffice north("North", 2454.88);
    salesOffice south("South", 2830.92);
    double ratio;

    ratio = north / south;
    cout << "[ North and South Office Sales Ratio ]" << endl;
    cout << "The North Office has " << (ratio * 100) << "% "
         << "of the sales of South Office" << endl;

    cout << endl;

    // menampilkan variabel class secara langsung
    cout << "[ North and South Office Sales Detail ]" << endl;
    cout << north;
    cout << south;

    return 0;
}