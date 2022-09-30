#include <iostream>
#include <string.h>
using namespace std;
#pragma once

class salesOffice
{
   //menggunakan friend untuk overload out/in operator
friend ostream& operator<<(ostream&, const salesOffice&);

protected:
   string officeName;
   double sales;

public:
   salesOffice(string, double);
   double operator/ (salesOffice);
   
};