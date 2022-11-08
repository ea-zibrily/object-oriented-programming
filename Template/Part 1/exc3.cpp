/*

Code: Template 1 Example
File: exc3.cpp
Programmer: Zibrilyy | SHINONNN
Date: 06/11/2022

*/

/*

Mencoba konsep Template dengan menggunakan constructor

*/

#include <iostream>
using namespace std;

template <class T>
class myPair
{
private:
    T value[2];

public:
    // membuat constructor template
    myPair(T first, T second)
    {
        value[0] = first;
        cout << "first number is " << value[0] << endl;
        value[1] = second;
        cout << "second number is " << value[1] << endl;
    }
};

int main()
{
    // memanggil template class contructor
    myPair<int> myObject(115, 36);
    myPair<float> myFloat(3.0, 2.18);

    return 0;
}
