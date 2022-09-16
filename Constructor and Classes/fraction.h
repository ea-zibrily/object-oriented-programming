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

    // func untuk memasukkan 2 value/nilai
    void enterdoubleValue(int, int);

    // func untuk memasukkan 3 value/nilai
    void entertripleValue(int);
};