/*

Code: Overloaded Fraction Number
File: overload1.cpp
Programmer: Zibrilyy | SHINONNN
Date: 30/09/2022

*/

/*

Pada pertemuan sebelumnya kalian telah membuat Kelas Pecahan yang berisi
beberapa field dan fungsi.

a. Tambahkan empat fungsi overload operator aritmatik +, -, *, dan /. Perlu diingat
Kembali bagaimana melakukan penjumlahan, pengurangan, perkalian dan
pembagian pada pecahan. Contohnya : 1/2 * 2/3 hasilnya 1/3, bukan 2/6.
b. Tambahkan fungsi overload operator==() yang membandingkan dua Pecahan.
c. Tambahkan fungsi overload operator>() dan operator<() untuk
membandingkan dua Pecahan.
d. Tambahkan operator extraction (<<) dan insertion (>>) pada kelas Pecahan.
e. Tulis fungsi main() yang mendeklarasikan array 10 nilai Pecahan secara acak,
dengan pembilang bernilai antara 1-5 dan penyebut bernilai 10; Kemudian gunakan fungsi 
Reduce yang telah dibuat sebelumnya untuk menghasilkan nilai pecahan sederhana, 
kemduian tampilkan seluruh Pecahan.
f. Kemudian tambahkan baris program pada fungsi main(), untuk meminta user
memilih operator aritmatik (+,-,*,/), dan kemudian program akan menampilkan
5 pasang operasi aritmatika dari 10 obyek yang ada di array tadi. Misal, jika
user memilih ‘+’, maka program akan melakukan operasi untuk obyek pecahan
di arr[0] + arr[5], arr[1] + arr[6], dst, kemudian menampilkan pecahan dan
hasilnya.

Note : untuk pengurangan, dipastika terlebih dahulu pecahan pertama lebih
besar dari pecahan kedua, supaya hasilnya tidak negative.

*/

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "overload1.h"
using namespace std;

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
    cout << "Fraction Number is: ";
    cout << bilBulat << " " << bilPembilang << "/" << bilPenyebut << endl;
}

void fraction::displayOriginal()
{
    cout << "Original Number is: ";
    cout << bilBulat << " " << bilPembilang << "/" << bilPenyebut << endl;
}

void fraction::displayResult()
{
    cout << "Result Number is: ";
    cout << bilBulat << " " << bilPembilang << "/" << bilPenyebut << endl;
}

ostream &operator<<(ostream &out, const fraction &oNum)
{
    out << oNum.bilPembilang << "/" << oNum.bilPenyebut;

    return out;
}

istream &operator>>(istream &in, fraction &iNum)
{
    cout << "Set Numerator: ";
    in >> iNum.bilPembilang;
    cout << "Set Denominator: ";
    in >> iNum.bilPenyebut;

    return in;
}

int main()
{
    // deklarasi variabel
    fraction temp;
    int number[10];
    int i, select;
    string name;
    // inisialisasi random
    srand((unsigned)time(NULL));

    cout << "   Fraction Number Program" << endl;
    cout << "==============================" << endl;

    // random bilangan pembilang
    for (i = 0; i < 10; i++)
    {
        number[i] = rand() % 5;
    }

    cout << "What's Your Name? ";
    cin >> name;
    cout << "--------------------" << endl;
    cout << "Hello " << name << "!" << endl;
    cout << "Let's Roll!" << endl;

    cout << "Enter the Operation of Your Choice!" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;

    cout << endl;

    cout << "What's Your Operation Choice? ";
    cin >> select;
    cout << "--------------------" << endl;
    switch (select)
    {
    case 1:
        for (i = 0; i < 5; i++)
        {
            cout << "Number " << i + 1 << "!" << endl;
            fraction sumNum1(number[i], 10);
            sumNum1.reduceFraction();
            sumNum1.displayFraction();
            fraction sumNum2(number[i], 10);
            sumNum2.reduceFraction();
            sumNum2.displayFraction();

            cout << endl;

            cout << "Fraction Number Comparison" << endl;
            if (sumNum1 == sumNum2)
            {
                cout << "Kedua bilangan memiliki nilai yang sama!" << endl;
            }
            else if (sumNum1 > sumNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih besar daripada bilangan kedua!" << endl;
            }
            else if (sumNum1 < sumNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih kecil daripada bilangan kedua!" << endl;
            }

            temp = sumNum1 + sumNum2;
            temp.displayResult();
            cout << "--------------------" << endl;
        }
        break;
    case 2:
        for (i = 0; i < 5; i++)
        {
            fraction minNum1(number[i], 10);
            minNum1.reduceFraction();
            minNum1.displayFraction();
            fraction minNum2(number[i], 10);
            minNum2.reduceFraction();
            minNum2.displayFraction();

            cout << endl;

            cout << "Fraction Number Comparison" << endl;
            if ((minNum1 == minNum2) || (minNum1 > minNum2))
            {
                temp = minNum1 - minNum2;
                temp.displayResult();
                cout << "--------------------" << endl;
            }
            else if (minNum1 < minNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih kecil daripada bilangan kedua!" << endl;
                cout << "Silahkan memilih ulang operasi yang tersedia" << endl;
            }
        }
        break;
    case 3:
        for (i = 0; i < 5; i++)
        {
            fraction multiNum1(number[i], 10);
            multiNum1.reduceFraction();
            multiNum1.displayFraction();
            fraction multiNum2(number[i], 10);
            multiNum2.reduceFraction();
            multiNum2.displayFraction();

            cout << endl;

            cout << "Fraction Number Comparison" << endl;
            if (multiNum1 == multiNum2)
            {
                cout << "Kedua bilangan memiliki nilai yang sama!" << endl;
            }
            else if (multiNum1 > multiNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih besar daripada bilangan kedua!" << endl;
            }
            else if (multiNum1 < multiNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih kecil daripada bilangan kedua!" << endl;
            }

            temp = multiNum1 * multiNum2;
            temp.displayResult();
            cout << "--------------------" << endl;
        }
        break;
    case 4:
        for (i = 0; i < 5; i++)
        {
            fraction distNum1(number[i], 10);
            distNum1.reduceFraction();
            distNum1.displayFraction();
            fraction distNum2(number[i], 10);
            distNum2.reduceFraction();
            distNum2.displayFraction();

            cout << endl;

            cout << "Fraction Number Comparison" << endl;
            if (distNum1 == distNum2)
            {
                cout << "Kedua bilangan memiliki nilai yang sama!" << endl;
            }
            else if (distNum1 > distNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih besar daripada bilangan kedua!" << endl;
            }
            else if (distNum1 < distNum2)
            {
                cout << "Bilangan pertama memiliki nilai lebih kecil daripada bilangan kedua!" << endl;
            }

            temp = distNum1 / distNum2;
            temp.displayResult();
            cout << "--------------------" << endl;
        }
        break;
    default:
        cout << "Pilihan anda salah!" << endl;
        break;
    }

    return 0;
}

/*
    fraction num1(3, 4);
    cout << "Input Triple Number!" << endl;
    num1.displayOriginal();
    // num1.reduceFraction();
    // num1.displayFraction();

    cout << endl;

    fraction num2(2, 5);
    cout << "Input Triple Number!" << endl;
    num2.displayOriginal();
    // num2.reduceFraction();
    // num2.displayFraction();

    cout << endl;
    temp = num1 + num2;

    cout << "Hasil Penjumlahannya adalah" << endl;
    temp.displayOriginal();
    */