#include <iostream>

using namespace std;

class fraction
{

private:
    int wholenumber;

    int numerator;

    int denominator;

public:
    int enterfractionValue();

    void displayfraction();

    void reducefraction();

    int getnumerator()
    {

        return numerator;
    }

    int getwholenumber()
    {

        return numerator;
    }
};

int fraction::enterfractionValue()
{

    cout << "\nEnter the whole number";

    cin >> wholenumber;

    cout << "\nEnter the numerator";

    cin >> numerator;

    cout << "\nEnter the denominator:";

    cin >> denominator;

    while (denominator == 0)
    {

        cout << "Invalid denominator";

        cout << "Please re enter";
    }

    return 0;
}

void fraction::displayfraction()
{

    cout << "The reduced fraction is"
         << "" << wholenumber << "" << numerator << "/" << denominator;
}

void fraction::reducefraction()
{

    int complete = wholenumber * denominator + numerator;

    wholenumber = complete / denominator;

    numerator = complete % denominator;

    if ((numerator % 2 == 0) && (denominator % 2 == 0))
    {

        numerator = numerator / 2;

        denominator = denominator / 2;
    }
}

int main()
{

    int cal = 0;

    fraction newfraction;

    while (cal == 0)
    {

        newfraction.enterfractionValue();

        if ((newfraction.getwholenumber() == 0) && (newfraction.getnumerator() == 0))

            cal = 1;

        break;
    }

    newfraction.reducefraction();

    newfraction.displayfraction();

    newfraction.reducefraction();

    newfraction.displayfraction();

    system("pause");

    return 0;
}