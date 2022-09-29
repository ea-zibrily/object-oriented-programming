/*

Code: Race Class
File: inhert2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 28/09/2022

*/

/*

Gunakan kelas Car dan RaceCar yang dibuat pada modul You Do It Inheritance dan
modifikasi sesuai petunjuk berikut :
a. Tambahkan field pada kelas Car untuk menyimpan nomor identifikasi kendaraan
dan jumlah miles(jarak) dari kendaraan.
b. Tambahkan fungsi setter untuk nomor id kendaraan. Tambahkan fungsi untuk
menaikkan jumlah jarak(miles). Fungsi ini menambahkan kecepatan  kendaraan sekarang
(dalam miles/hour) ke jumlah miles. Kemudian tambahkan fungsi yang mengembalikan
jarak kendaraan (fungsi getter jarak).
c. Modifikasi fungsi turnIgnitionOn() untuk menginisialisasi jarak tempuh ke 0.
Modifikasi fungsi showCar() untuk menambahkan info nomor id dan jarak tempuh (miles) kendaraan.
d. Tulis fungsi main() yang mendeklarasikan Car dan RaceCar. Set jarak konstan
lintasan balapan misal 500 miles. Kemudian:

i. Berikan no id ke kendaraan,
ii. start kendaraan dan karena kendaraan tidak dapat melebihi jarak maks lintasan,
iii. buatlah angka acak dibawah 200 untuk mengeset kecepatan dua mobil tersebut,
dan menaikkan jarak tempuh kendaraan (lakukan Langkah iii berulang).
iv. Ketika salah satu kendaraan melebihi jarak lintasan maka kendaraan tersebut menang.

Simpan dalam file Race.cpp

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "inhert2.h"
using namespace std;

// Memberi code untuk func dari class Car
void Car::showCar()
{
    cout << "Car Id is " << getCarId() << endl;
    if (isIgnitionOn)
        cout << "Ignition is on. " << endl;
    else
        cout << "Ignition is off. " << endl;
    cout << "Speed is " << speed << endl;
    cout << "Miles in " << getCountMiles() << endl;
}

void Car::turnIgnitionOn()
{
    miles = 0;
    isIgnitionOn = true;
}

void Car::turnIgnitionOff()
{
    speed = 0;
    isIgnitionOn = false;
}

void Car::setSpeed(int mph)
{
    const int STD_LIMIT = 65;
    mph = rand() % 200;

    if (isIgnitionOn)
        if (mph <= STD_LIMIT)
            speed = mph;
        else
            speed = STD_LIMIT;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

// Memberi code untuk func dari class RaceCar
void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    mph = rand() % 200;

    if (isIgnitionOn)
        if (speed <= MAX_SPEED)
            speed = mph;
        else
            speed = MAX_SPEED;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

// Setter getter class Car
int Car::getCarId()
{
    return carId;
}

void Car::setCarId(int id)
{
    carId = id;
}

int Car::getCountMiles()
{
    return miles;
}

void Car::setCountMiles(const int limit)
{
    if (isIgnitionOn)
        if (miles <= limit)
            miles += speed;
        else
            miles = limit;
    else
        cout << "Can't set Miles - ignition is off!" << endl;
}

int main()
{
    // limit jarak mobil
    const int milesLimit = 500;
    int carSpeed = 200;
    srand((unsigned)time(NULL));

    // deklarasi variabel class
    Car xenia;
    RaceCar McQueen;

    // Car
    cout << "----------[Normal Car Data]----------" << endl;
    xenia.setCarId(814);
    xenia.turnIgnitionOn();
    xenia.setSpeed(carSpeed);
    xenia.setCountMiles(milesLimit);
    xenia.showCar();

    cout << endl;

    // Race Car
    cout << "----------[Race Car Data]----------" << endl;
    McQueen.setCarId(95);
    McQueen.turnIgnitionOn();
    McQueen.setSpeed(carSpeed);
    McQueen.setCountMiles(milesLimit);
    McQueen.showCar();

    cout << endl;

    if (xenia.getCountMiles() > McQueen.getCountMiles())
    {
        cout << "Xenia Win a Race!" << endl;
    }
    else
    {
        cout << "McQueen Win a Race!" << endl;
    }

    return 0;
}