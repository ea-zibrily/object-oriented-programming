#include <iostream>
#include "teori1.h"
using namespace std;


int alien::getEyes()
{
    return eyes;
}

void alien::setEyes(int ye)
{
    eyes = ye;
}

int alien::getLeg()
{
    return leg;
}

void alien::setLeg(int ye)
{
    leg = ye;
}


alien::alien()
{
    this->eyes = 5;
    this->leg = 2;
}

alien::alien(int x)
{
    this->eyes = x;
}

int main()
{
    alien yeye;
    cout << "Eyes alien: " << yeye.getEyes() << endl;
    cout << "Leg alien: " << yeye.getLeg() << endl;

    cout << endl;

    alien awokawok(5);
    cout << "Eyes alien: " << awokawok.getEyes() << endl;
    cout << "Leg alien: " << awokawok.getLeg() << endl;

    return 0;
}