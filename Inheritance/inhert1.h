#include <string.h> //menggunakan library string
using namespace std;
#pragma once

class book
{
protected:
    string judul;
    string pengarang;
    bool isFiction;

public:
    string getJudul();
    void setJudul(string);
    string getPengarang();
    void setPengarang(string);
    void displayBook();
};

class fiction : public book
{
private:
    int readQty;
    bool isFiction();
public:
    int getReadQty();
    void setReadQty(int);
    void displayBook();

};

class nonFiction : public book
{
private:
    int pageNum;

public:
    int getPageNum();
    void setPageNum(int);
    void displayBook();

};
