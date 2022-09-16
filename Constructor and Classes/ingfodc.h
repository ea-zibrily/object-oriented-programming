#pragma once
class construct
{
private:
    int sum = 0;
    int num;
    int den;
    int result;

public:
    char divided = '/';

    void displayConstruct();
    void gcd(int a, int b);

    construct(int input1, int input2)
    {
        num = input1;
        if (input2 == 0)
        {
            input2 = 1;
        }
        den = input2;

        int mod;
        int temp;
        if (num > den)
        {
            temp = num;
            mod = temp / den;
            sum = sum + mod;
            num / den;
        }

        gcd(num, den);
        num = num / result;
        den = den / result;

        if (den < num)
        {
            sum = num + sum;
        }
    }
    construct(int a, int b, int c)
    {
        sum = a;
        num = b;
        if (c == 0)
        {
            c = 1;
        }
        den = c;

        int mod;
        int temp;
        if (num > den)
        {
            temp = num;
            mod = temp / den;
            sum = sum + mod;
            num / den;
        }

        gcd(num, den);
        num = num / result;
        den = den / result;

        if (den < num)
        {
            sum = num + sum;
        }
    }
};