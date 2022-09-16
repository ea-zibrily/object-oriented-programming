/*

Code: Fraction Number
File: fraction.cpp
Programmer: Zibrilyy | SHINONNN
Date: 15/09/2022

*/

/*

Add two constructors to the class.

- The first accepts two integer values representing the numerator and denominator.
If a single integer is passed to the constructor, use it as the numerator, and
use a default value of 1 for the denominator. If no values are passed to the constructor,
use a default value of 0 for the numerator and 1 for the denominator. When any Fraction
is constructed with a 0 argument for the denominator, force the denominator value to 1.

- The second constructor requires three arguments: a whole number portion for a Fraction,
a numerator, and a denominator. This constructor executes when any Fraction object is
instantiated using three integer arguments. As with the other constructor, when any Fraction
is constructed with a 0 argument for the denominator, force the denominator value to 1.
Whenever a Fraction object is constructed, automatically reduce the Fraction to the proper
format. For example, a Fraction created using 0, 2, and 4 as arguments should be reduced to 1/2,
and a Fraction created as 3 10/2 should be reduced to 8 0/1.
Write a main() function that declares several Fraction objects, and confirm that the class
works correctly.


*/

#include <iostream>
#include "fraction.h"
using namespace std;

// constructor untuk bilangan numerator dan denominator
void fraction::enterdoubleValue(int num, int denom)
{
    if (num == NULL)
    {
        num = 1;
    }
    else if ((num == NULL) && (denom == NULL))
    {
        num = 0;
        denom = 1;
    }
    else if (denom == 0)
    {
        denom = 1;
    }

    /*
    Jika satu bilangan bulat diteruskan ke konstruktor, gunakan itu sebagai pembilang,
    dan gunakan nilai default 1 untuk penyebutnya. Jika tidak ada nilai yang diteruskan
    ke konstruktor, gunakan nilai default 0 untuk pembilang dan 1 untuk penyebut. Ketika
    Pecahan apa pun dibangun dengan argumen 0 untuk penyebut, paksa nilai penyebut menjadi 1.

    */
}

void fraction::entertripleValue(int denom)
{
    while (denom == 0)
    {
        cout << "Enter a denominator number: ";
        cin >> bilPenyebut;
    }
}

void fraction::enterFractionValue()
{
    cout << "Enter a whole number: ";
    cin >> bilBulat;

    cout << "Enter a numerator number:: ";
    cin >> bilPembilang;

    cout << "Enter a denominator number: ";
    cin >> bilPenyebut;

    enterdoubleValue(bilPembilang, bilPenyebut);

    entertripleValue(bilPenyebut);
}

void fraction::reduceFraction()
{
    static int reduce;
    reduce = bilBulat * bilPenyebut + bilPembilang;

    bilBulat = reduce / bilPenyebut;
    bilPembilang = reduce % bilPenyebut;

    if ((bilPembilang % 2 == 0) && (bilPenyebut % 2 == 0))
    {
        bilPembilang = bilPembilang / 2;

        bilPenyebut = bilPenyebut / 2;
    }
}

void fraction::displayFraction()
{
    cout << "The Fraction Number is: ";
    cout << bilBulat << " " << bilPembilang << "/" << bilPenyebut << endl;
}

int main()
{
    fraction myFraction;
    
    cout << "Fraction Number Program" << endl;
    cout << "=============================" << endl;

    myFraction.enterFractionValue();
    myFraction.reduceFraction();

    cout << endl;
    cout << "Reduce Processing" << endl;
    myFraction.displayFraction();

    return 0;
}