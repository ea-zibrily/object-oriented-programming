#include <string.h>
using namespace std;
#pragma once

class salesOffice
{
private:
   string officeName;
   double sales;

public:
   salesOffice(string, double);
   double operator/ (salesOffice);
   
};