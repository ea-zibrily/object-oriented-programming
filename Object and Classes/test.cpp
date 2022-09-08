/*
 * Program: MyCharacters.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 18, 2013
 */

/* Purpose: Computer games often contain different characters or creatures. For example, you might
 design a game in which alien beings possess specific characteristics such as color, number
 of eyes, or number of lives. Design a character for a game, creating a class to hold at least
 three attributes for each character. Include methods to get and set each of the character’s
 attributes. Then write an application in which you create at least two characters each of
 which has a random age up to 100, a random number of eyes up to 10, and a random
 number of legs, up to 12. In turn, pass each character to a display method that displays
 the character’s attributes. Save the program as MyCharacters.cpp */


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// declaration
class Alien {
private:
	string color;
	int legs;
	int eyes;
	int age;

public:
	string getColor();
	void setColor(string);
	int getLegs();
	void setLegs(int);
	int getEyes();
	void setEyes(int);
	int getAge();
	void setAge(int);
	void DisplayAlien();
};

// implementation
string Alien::getColor(){
	return color;
}

void Alien::setColor(string new_color){
	color = new_color;
}

int Alien::getLegs(){
	return legs;
}

void Alien::setLegs(int new_legs){
	legs = rand() % new_legs;

}

int Alien::getEyes(){
	return eyes;
}

void Alien::setEyes(int new_eyes){
	eyes = rand() % new_eyes;
}

int Alien::getAge(){
	return age;
}

void Alien::setAge(int new_age){
	age = rand() % new_age;
}

void Alien::DisplayAlien(){
	cout << "Age: " << getAge() << endl;
	cout << "Legs: " << getLegs() << endl;
	cout << "Eyes: " << getEyes() << endl;
	cout << "Color: " << getColor() << endl;

}

// main
int main(){
	srand((unsigned) time(NULL));
	// first Alien
	cout << "Creating a new Alien 'first'" << endl;
	Alien first;
	cout << "Setting first Alien color." << endl;
	first.setColor("Green");
	cout << "Setting first Alien age." << endl;
	first.setAge(100);
	cout << "Setting first Alien legs." << endl;
	first.setLegs(12);
	cout << "Setting first Alien eyes." << endl;
	first.setEyes(10);

	// spacing
	cout << endl;

	// second Alien
	cout << "Creating a new Alien 'second'" << endl;
	Alien second;
	cout << "Setting second Alien color." << endl;
	second.setColor("Brown");
	cout << "Setting second Alien age." << endl;
	second.setAge(100);
	cout << "Setting second Alien legs." << endl;
	second.setLegs(12);
	cout << "Setting second Alien eyes." << endl;
	second.setEyes(10);


	// spacing
	cout << endl;

	//printing information
	cout << " First Alien information:" << endl;
	first.DisplayAlien();
	// spacing
	cout << endl;

	//printing information
	cout << " Second Alien information:" << endl;
	second.DisplayAlien();

}