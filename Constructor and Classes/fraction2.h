#pragma once

class fraction
{
private:
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

    //func untuk menampilkan value/nilai sebelum direduce
    void displayOriginal();

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
};