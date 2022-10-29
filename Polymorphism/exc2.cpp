/*

Code: Polymorphism Practice 1
File: exc2.cpp
Programmer: Zibrilyy | SHINONNN
Date: 27/10/2022

*/

/*

Mencoba konsep Polymorphism

*/

#include <iostream>
#include "exc2.h"
using namespace std;

int main()
{
    shape *p;
    circle C1(5);
    rectangle R1(4,6);

    p = &C1;
    C1.displayCirc();
    p->calculateArea();
    p->display();

    cout << endl;
    cout << endl;
    
    p = &R1;
    R1.displayRect();
    p->calculateArea();
    p->display();

    return 0;

}


/*
include <iostream>
using namespace std;

class Shape{
    protected:
        double area;
    public:
        virtual void Calculate_Area()=0;
        Shape(){
            area=0;
        }
        void Display(){
            cout<<"\nArea is: "<<area;
        }
};
class Circle:public Shape{
    private:
        double radius;
    public:
        Circle(double r){
            radius=r;
        }
    void Display(){
    cout<<"\nRadius is: "<<radius;
}
    void Calculate_Area(){
        double pi=3.142;
        cout<<"\nArea of the Circle is: "<<pi*radius*radius;
    }
};
class Rectangle:public Shape{
    private:
        double length;
        double breadth;
    public:
        Rectangle(double l, double b){
            length=l;
            breadth=b;
        }
    void Display(){
        cout<<"\nLength is: "<<length;
        cout<<"\nBreadth is: "<<breadth;
    }
    void Calculate_Area(){
        cout<<"\nArea of the Rectangle is: "<<length*breadth;
    }
};
int main()
{
    Shape *p; Circle C1(5); 
    Rectangle R1(4,6); 
    p=&C1; 
    p->Calculate_Area(); 
    p->Display(); 
    p=&R1; 
    p->Calculate_Area(); 
    p->Display();


    return 0;
}
*/
