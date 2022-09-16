#include "ingfodc.h"
#include <iostream>
using namespace std;

void construct::displayConstruct()
{
    if (sum == 0)
    {
        cout << "Fraction = " << num << divided << den << endl;
    }
    else if (den < num)
    {
        cout << "Fraction = " << sum << endl;
    }
    else
    {
        cout << "Fraction = " << sum << " " << num << divided << den << endl;
    }
}

void construct::gcd(int a, int b)
{

    result = min(num, den);
    while (result > 0)
    {
        if (num % result == 0 && den % result == 0)
        {
            break;
        }
        result--;
    }
}

int main()
{
    construct fraction1(1, 2);
    fraction1.displayConstruct();

    construct fraction2(4, 98, 56);
    fraction2.displayConstruct();

    return 0;
}