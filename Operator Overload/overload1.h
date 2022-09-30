#include <iostream>
using namespace std;
#pragma once

class fraction
{
    //in out operator
    friend ostream& operator<<(ostream&, const fraction&);
    friend istream& operator>>(istream&, fraction&);
protected:
    int bilBulat;
    int bilPembilang;
    int bilPenyebut;

public:
    // func untuk memasukkan value/nilai
    void enterFractionValue();

    // func untuk mengurangi value/nilai
    void reduceFraction();

    // func untuk menampilkan value/nilai
    void displayFraction();

    // func untuk menampilkan value/nilai sebelum direduce
    void displayOriginal();

    // func untuk menampilkan value/nilai sebelum direduce
    void displayResult();

    // construct nilai default
    fraction()
    {
        this->bilBulat = 1;
        this->bilPembilang = 0;
        this->bilPenyebut = 1;
    }

    // construct 1 nilai
    fraction(int num)
    {
        this->bilBulat = 1;
        this->bilPembilang = num;
        this->bilPenyebut = 1;
    }

    // construct 2 nilai
    fraction(int num, int denom)
    {
        this->bilBulat = 1;
        this->bilPembilang = num;
        this->bilPenyebut = denom;

        if (denom == 0)
        {
            this->bilPenyebut = 1;
        }
    }

    // construct 3 nilai
    fraction(int whole, int num, int denom)
    {
        this->bilBulat = whole;
        this->bilPembilang = num;
        this->bilPenyebut = denom;

        if (denom == 0)
        {
            this->bilPenyebut = 1;
        }
    }

    // overload aritmatik
    fraction operator+(fraction another)
    {
        int tempNum;
        int tempDenom;
        tempNum = (this->bilPembilang * another.bilPenyebut) + (another.bilPembilang * this->bilPenyebut);
        tempDenom = this->bilPenyebut * another.bilPenyebut;

        return fraction(tempNum, tempDenom);
    }

    fraction operator-(fraction another)
    {
        int tempNum;
        int tempDenom;
        tempNum = (this->bilPembilang * another.bilPenyebut) - (another.bilPembilang * this->bilPenyebut);
        tempDenom = this->bilPenyebut * another.bilPenyebut;

        return fraction(tempNum, tempDenom);
    }

    fraction operator*(fraction another)
    {
        int tempNum;
        int tempDenom;
        tempNum = this->bilPembilang * another.bilPembilang;
        tempDenom = this->bilPenyebut * another.bilPenyebut;

        return fraction(tempNum, tempDenom);
    }

    fraction operator/(fraction another)
    {
        int tempNum;
        int tempDenom;
        tempNum = this->bilPembilang * another.bilPenyebut;
        tempDenom = this->bilPenyebut * another.bilPembilang;

        return fraction(tempNum, tempDenom);
    }

    //operator logic
    bool operator==(fraction another)
    {
        if ((this->bilPembilang && this->bilPenyebut) == (another.bilPembilang && another.bilPenyebut))
            return true;
        else
            return false;
    }

    bool operator>(fraction another)
    {
        if ((this->bilPembilang && this->bilPenyebut) > (another.bilPembilang && another.bilPenyebut))
            return true;
        else
            return false;
    }

    bool operator<(fraction another)
    {
        if ((this->bilPembilang && this->bilPenyebut) < (another.bilPembilang && another.bilPenyebut))
            return true;
        else
            return false;
    }
};