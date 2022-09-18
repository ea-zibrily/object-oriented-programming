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
};