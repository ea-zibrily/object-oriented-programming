/*

Code: Book Class
File: inhert1.cpp
Programmer: Zibrilyy | SHINONNN
Date: 28/09/2022

*/

/*

1. Buat kelas Buku yang memiliki field Judul dan Pengarang. Berikan fungsi getter dan
setter dari field tersebut. Berikan pula fungsi untuk menampilkan informasi. Kemudian
buatlah kelas turunan:

a. Fiction: yang memiliki field nilai numerik tingkat membaca. Berikan pula getter
dan setter yang sesuai. Berikan pula fungsi untuk menampilkan informasi.

b. NonFiction, yang memiliki field jumlahHalaman. Berikan pula getter dan setter
yang sesuai. Berikan pula fungsi untuk menampilkan informasi.

Kemudian buat fungsi main() untuk menguji kelas – kelas yang dibuat tersebut. Simpan
dalam file Buku.cpp.


*/

#include <iostream>
#include <string.h> //menggunakan library string
#include "inhert1.h"
using namespace std;

// Setter getter class book
string book::getJudul()
{
    return judul;
}

void book::setJudul(string title)
{
    judul = title;
}

string book::getPengarang()
{
    return pengarang;
}

void book::setPengarang(string author)
{
    pengarang = author;
}

void book::displayBook()
{
    cout << "Book Data Information" << endl;
    cout << "=====================" << endl;
    cout << "Title: " << getJudul() << endl;
    cout << "Author: " << getPengarang() << endl;

    cout << endl;
}

// Setter getter class fiction
int fiction::getReadQty()
{
    return readQty;
}

void fiction::setReadQty(int qty)
{
    readQty = qty;
}

void fiction::displayBook()
{
    cout << "Book Data Information" << endl;
    cout << "=====================" << endl;
    cout << "Title: " << getJudul() << endl;
    cout << "Author: " << getPengarang() << endl;
    cout << "Genre: Fiction" << endl;
    cout << "Reading Quantity: " << getReadQty() << endl;

    cout << endl;
}

// Setter getter class nonFiction
int nonFiction::getPageNum()
{
    return pageNum;
}

void nonFiction::setPageNum(int page)
{
    pageNum = page;
}

void nonFiction::displayBook()
{
    cout << "Book Data Information" << endl;
    cout << "=====================" << endl;
    cout << "Title: " << getJudul() << endl;
    cout << "Author: " << getPengarang() << endl;
    cout << "Genre: Non Fiction" << endl;
    cout << "Page Number: " << getPageNum() << endl;

    cout << endl;
}

int main()
{
    // deklarasi variabel  class
    book bookIngfo;
    fiction fictionBook;
    nonFiction nonfictionBook;

    // menggunakan book class
    bookIngfo.setJudul("Jujutsu Kaisen");
    bookIngfo.setPengarang("Gege Akutami");
    bookIngfo.displayBook();

    // menggunakan fiction class
    fictionBook.setJudul("Naruto Shippuden");
    fictionBook.setPengarang("Masashi Kisimoto");
    fictionBook.setReadQty(90);
    fictionBook.displayBook();

    // menggunakan nonFiction class
    nonfictionBook.setJudul("The Power of Habit");
    nonfictionBook.setPengarang("Charles Duhigg");
    nonfictionBook.setPageNum(371);
    nonfictionBook.displayBook();

    return 0;
}