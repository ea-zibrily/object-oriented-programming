#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class basicTicket
{
protected:
    string passengerName;
    string cityDep;
    string cityArr;
    int flightNum;
    float basicPrice;

public:
    virtual float getPrice()
    {
        return basicPrice;
    }
    virtual void display()
    {
        cout << "Nama Penumpang: " << passengerName << endl;
        cout << "Kota Keberangkatan: " << cityDep << endl;
        cout << "Kota Kedatangan: " << cityArr << endl;
        cout << "Nomor Penerbangan: " << flightNum << endl;
        cout << "Harga Tiket: " << getPrice() << endl;
    }

    basicTicket()
    {
        this->passengerName = "Data belum dimasukkan!";
        this->cityDep = "Data belum dimasukkan!";
        this->cityArr = "Data belum dimasukkan!";
        this->flightNum = 0;
        this->basicPrice = 0;
    }

    basicTicket(string nama, string keberangkatan, string kedatangan, int noPenerbangan, float hargaTiket)
    {
        this->passengerName = nama;
        this->cityDep = keberangkatan;
        this->cityArr = kedatangan;
        this->flightNum = noPenerbangan;
        this->basicPrice = hargaTiket;
    }

    // overload func
    float operator+(basicTicket ticketObj)
    {
        float result;
        result = basicPrice + ticketObj.basicPrice;
        return result;
    }
    void operator=(basicTicket ticketObj)
    {
        basicPrice = ticketObj.basicPrice;
    }
};

// inheritance premiumTicket
class premiumTicket : public basicTicket
{
protected:
    float premiumPrice;
    int chairNum;

public:
    float getPrice()
    {
        int slice;
        slice = basicPrice * 10 / 100;
        premiumPrice = basicPrice + slice;
        basicPrice = premiumPrice;
        return basicPrice;
    }

    void display()
    {
        cout << "Nama Penumpang: " << passengerName << endl;
        cout << "Kota Keberangkatan: " << cityDep << endl;
        cout << "Kota Kedatangan: " << cityArr << endl;
        cout << "Nomor Penerbangan: " << flightNum << endl;
        cout << "Harga Tiket: " << getPrice() << endl;
        cout << "Nomor Kursi: " << chairNum << endl;
    }

    premiumTicket(string nama, string keberangkatan, string kedatangan, int noPenerbangan, float hargaTiket, int noKursi)
    {
        this->passengerName = nama;
        this->cityDep = keberangkatan;
        this->cityArr = kedatangan;
        this->flightNum = noPenerbangan;
        this->basicPrice = hargaTiket;
        this->chairNum = noKursi;
    }
};

int main()
{
    float ticketTotal;

    cout << "Flight Ticket Program" << endl;
    cout << "---------------------" << endl;

    cout << "Basic Ticket" << endl;
    basicTicket normalTicket1("Naruto", "Konohagakure", "Sunagakure", 101, 50000);
    normalTicket1.display();

    cout << endl;
    basicTicket normalTicket2("Naruto", "Konohagakure", "Sunagakure", 101, 40000);
    normalTicket2.display();

    cout << endl;
    basicTicket normalTicket3("Naruto", "Konohagakure", "Sunagakure", 101, 30000);
    normalTicket3.display();

    cout << endl;
    basicTicket normalTicket4("Naruto", "Konohagakure", "Sunagakure", 101, 60000);
    normalTicket4.display();

    cout << endl;
    cout << "-----------------------" << endl;

    cout << "Premium Ticket" << endl;
    premiumTicket ubnormalTicket("Sasuke", "Konohagakure", "Redaku", 101, 50000, 3001);
    ubnormalTicket.display();

    cout << endl;
    cout << "Ticket Price Count" << endl;
    cout << "------------------" << endl;

    ticketTotal = normalTicket1 + ubnormalTicket;
    cout << "Total Harga Tiket: " << ticketTotal << endl;
    cout << endl;

    cout << "Vector Polymorphism" << endl;
    cout << "------------------" << endl;

    float total1, total2;
    float totalFix;

    vector<basicTicket> *pointer = new vector<basicTicket>(3);
    pointer->push_back(normalTicket1);
    pointer->push_back(normalTicket2);
    pointer->push_back(normalTicket3);
    pointer->push_back(normalTicket4);
    total1 = normalTicket1 + normalTicket2;
    total2 = normalTicket3 + normalTicket4;
    totalFix = total1 + total2;

    cout << "Total Harga Tiket: " << totalFix << endl;

    return 0;
}