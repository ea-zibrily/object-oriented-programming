#include <iostream>
using namespace std;

class book
{
    private:
        string judul;
        string pengarang;
    public:
        string getJudul();
        void setJudul(string title);
        string getPengarang();
        void setPengarang(string author);
        void displayBook();
};

string book::getJudul()
{
    return judul;
}
void book::setJudul(string title)
{
    judul = title;
}

int main()
{
    book book1;
    book1.setJudul("Harry Potter");
    book1.setPengarang("J.K. Rowling");
    book1.displayBook();
    return 0;
}