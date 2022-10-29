/*

Code: Polymorphism Practice 3
File: exc3.cpp
Programmer: Zibrilyy | SHINONNN
Date: 27/10/2022

*/

/*

Mencoba konsep Polymorphism

*/



#include <iostream>
using namespace std;

class dateTime
{
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;

public:
    void SetValue(int day, int month, int year);
    void SetValue(int day, int month, int year, int hour);
    void SetValue(int day, int month, int year, int hour, int minutes);
    void SetValue(int day, int month, int year, int hour, int minutes, int seconds);
};

int main()
{
    dateTime date;
    date.SetValue(7,8,9);

    return 0;
}