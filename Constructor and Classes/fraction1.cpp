/*

Code: Fraction Number
File: fraction1.cpp
Programmer: Zibrilyy | SHINONNN
Date: 15/09/2022

*/

/*

Buat kelas Fraction dengan tiga three private data fields untuk bilangan bulat, pembilang, dan penyebut.
Tambahkan pula constant static public field untuk menyimpan symbol pemisah pembilang dan penyebut ketika
menampilkan Fraction — tanda ‘/’. Buat tiga public member functions dalam kelas, sebagai berikut:

- An enterFractionValue() function that prompts the user to enter values for the Fraction. Do not
allow the user to enter a value of 0 for the denominator of any Fraction; continue to prompt the
user for a denominator value until a valid one is entered.

- A reduceFraction()function that reduces a Fraction to proper form. For example, a Fraction with
the value 0 2/6 would be reduced to 0 1/3 and a Fraction with the value 4 18/4 would be reduced to 8 1/2.

- A displayFraction()function that displays the Fraction whole number, numerator, slash, and denominator.


Tambahkan fungsi lain yang dibutuhkan kalian. Buat fungsi main() yang membuat object Fraction, dan meminta
user untuk memasukkan nilai pada object Fraction tersebut. Setiap fraction yang dimasukkan, tampilkan pecahan,
sederhanakan pecahan dan tampilkan pecahan lagi.

*/

#include <iostream>
#include "fraction1.h" //memanggil header
using namespace std;


//constructor untuk input bilangan
void fraction::enterFractionValue()
{
    cout << "Enter a whole number: ";
    cin >> bilBulat;

    cout << "Enter a numerator number: ";
    cin >> bilPembilang;

    cout << "Enter a denominator number: ";
    cin >> bilPenyebut;

    while (bilPenyebut == 0)
    {
        cout << "Enter a denominator number: ";
        cin >> bilPenyebut;
    }
}

//constructor untuk mengubah bilangan menjadi lebih sederhana
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

//constructor untuk menampilkan bilangan
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