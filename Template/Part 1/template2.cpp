#include <iostream>
#include <string.h>
using namespace std;

void displayCity(string name, int dist)
{
    cout << "City Name is " << name << endl;
    cout << name << " Distance is " << dist << endl;
    // cout << endl;
}

void displayPlanet(string name, float dist)
{
    cout << "Planet Name is " << name << endl;
    cout << name << " Distance is " << dist << endl;
    // cout << endl;
}

template <class T>
T calcDistance(T distA, T distB)
{
    T distTotal;
    distTotal = distA + distB;

    return distTotal;
}

template <class T>
class city
{
protected:
    T cityDist;
    string cityName;

public:
    city(T distance, string name)
    {
        this->cityDist = distance;
        this->cityName = name;

        displayCity(this->cityName, this->cityDist);
    }
    T operator+(city);
};

template <class T>
T city<T>::operator+(city cityTarget)
{
    T ratio;
    ratio = calcDistance<T>(cityDist, cityTarget.cityDist);
    // ratio = cityDist + cityTarget.cityDist;
    cout << "\n"
         << cityName << " to " << cityTarget.cityName << " Total Distance is ";

    return ratio;
}

template <class T>
class planet
{
protected:
    T planetDist;
    string planetName;

public:
    planet(T distance, string name)
    {
        this->planetDist = distance;
        this->planetName = name;
        displayPlanet(this->planetName, this->planetDist);
    }
    T operator+(planet);
};

template <class T>
T planet<T>::operator+(planet planetTarget)
{
    T ratio;
    ratio = calcDistance<T>(planetDist, planetTarget.planetDist);
    // ratio = planetDist + planetTarget.planetDist;
    cout << "\n"
         << planetName << " to " << planetTarget.planetName << " Total Distance is ";

    return ratio;
}

int main()
{
    // deklarasi variabel yang akan digunakan
    int city1Dist, city2Dist, calculate;
    double planet1Dist, planet2Dist, calculateF;
    string city1Name, city2Name, planet1Name, planet2Name;

    // deklarasi city
    city1Dist = 24;
    city2Dist = 50;
    city1Name = "Chicago";
    city2Name = "Las Vegas";

    // deklarasi planet
    planet1Dist = 133.7;
    planet2Dist = 96.52;
    planet1Name = "Venus";
    planet2Name = "Mars";

    // mengakses template city
    cout << "City Template" << endl;
    cout << "-------------" << endl;

    city<int> myCity1(city1Dist, city1Name);
    city<int> myCity2(city2Dist, city2Name);

    calculate = myCity1 + myCity2;
    cout << calculate << endl;

    cout << "=====================" << endl;

    // mengakses template planet
    cout << "Planet Template" << endl;
    cout << "---------------" << endl;

    planet<double> myPlanet1(planet1Dist, planet1Name);
    planet<double> myPlanet2(planet2Dist, planet2Name);

    calculateF = myPlanet1 + myPlanet2;
    cout << calculateF << endl;

    cout << "=====================" << endl;

    return 0;
}