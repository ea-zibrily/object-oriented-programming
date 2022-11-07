/*

Code: Template 1 Example
File: exc3.cpp
Programmer: Zibrilyy | SHINONNN
Date: 06/11/2022

*/

/*

Mencoba konsep Template dengan mengisi func pada public class

*/

#include <iostream>
using namespace std;

template <class T>
class myPair
{
private:
    T a, b;

public:
    // membuat constructor class myPair
    myPair(T first, T second)
    {
        a = first;
        b = second;
        cout << "first number is " << a << endl;
        cout << "second number is " << b << endl;
    }

    T getMax();
};

//<summary>
// untuk mengisi func getMax, harus membuat template class baru
// saat akan mengisi, harus diawali dengan prefix "< >"
//</summary>

template <class T>
T myPair<T>::getMax()
{
    T retval;
    retval = a > b ? a : b;

    return retval;
}

int main()
{
    myPair<int> myObject(115, 36);
    cout << "getMax number is " << myObject.getMax() << endl;

    return 0;
}
