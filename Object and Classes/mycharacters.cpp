/*

Code: Monster Random Characters
File: mycharacters.cpp
Programmer: Zibrilyy | SHINONNN
Date: 08/09/2022

*/

/*

Computer games often contain different characters or creatures. For example, 
you might design a game in which alien beings possess specific characteristics 
such as color, number of eyes, or number of lives. Design a character for a game, 
creating a class to hold at least three attributes for each character. Include methods 
to get and set each of the character’s attributes. Then write an application in which 
you create at least two characters each of which has a random age up to 100, a random 
number of eyes up to 10, and a random number of legs, up to 12. In turn, pass each 
character to a display method that displays the character’s attributes

*/

#include <iostream>
//menggunakan library
#include <stdlib.h>
#include <time.h>
#include "mycharacters.h"
using namespace std;

// deklarasi
void snyder::setAge(int snyderAge)
{
    age = rand() % snyderAge;
    cout << age << endl;
}

void snyder::setEyes(int snyderEyes)
{
    eyes = rand() % snyderEyes;
    cout << eyes << endl;
}

void snyder::setLeg(int snyderLeg)
{
    leg = rand() % snyderLeg;
    cout << leg << endl;
}

void snyder::setName(int snyderNameIndex)
{
    nameIndex = rand() % snyderNameIndex;
    switch (nameIndex)
    {
    case 0:
        cout << "Yunaz" << endl;
        break;
    case 1:
        cout << "Titanqu" << endl;
        break;
    case 2:
        cout << "Gleam Boss" << endl;
        break;
    case 3:
        cout << "Spartian" << endl;
        break;
    default:
        cout << "Nama Monster tidak tersedia!\n Silahkan masukkan ulang!" << endl;
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Creating first Snyder Monster!" << endl;
    cout << endl;

    snyder firstMonster;
    cout << "Monster Name: ";
    firstMonster.setName(3);
    cout << "Age: ";
    firstMonster.setAge(100);
    cout << "Eyes: ";
    firstMonster.setEyes(10);
    cout << "Leg: ";
    firstMonster.setLeg(12);

    cout << "=============================" << endl;

    cout << "Creating second Snyder Monster!" << endl;
    cout << endl;

    snyder secondMonster;
    cout << "Monster Name: ";
    secondMonster.setName(3);
    cout << "Age: ";
    secondMonster.setAge(100);
    cout << "Eyes: ";
    secondMonster.setEyes(10);
    cout << "Leg: ";
    secondMonster.setLeg(12);

    return 0;
}