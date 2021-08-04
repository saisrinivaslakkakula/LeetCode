//
// Created by sai srinivas lakkakula on 8/3/21.
//

#include "RomanNumeral.h"


RomanNumeral::RomanNumeral() : roman(""), decimal(0) {}

//Connstructor with integer parameter
RomanNumeral::RomanNumeral(int d) : decimal(d) {}

//Constructor with string parameter
RomanNumeral :: RomanNumeral(string r) : roman(r) {}

//getter functions that returns RomanNumeral's object
int RomanNumeral::get_decimal() const { return decimal; }
string RomanNumeral::get_roman() const { return roman; }

//Overload Arithmetic operators
RomanNumeral RomanNumeral :: operator -(const RomanNumeral &obj) const
{
    RomanNumeral difference(decimal - obj.decimal);
    return difference;
}

RomanNumeral RomanNumeral :: operator +(const RomanNumeral &obj) const
{
    RomanNumeral sum(decimal + obj.decimal);
    return sum;
}

RomanNumeral RomanNumeral :: operator *(const RomanNumeral &obj) const
{
    RomanNumeral multiply(decimal * obj.decimal);
    return multiply;
}

RomanNumeral RomanNumeral :: operator /(const RomanNumeral &obj) const
{
    RomanNumeral divide(decimal / obj.decimal);
    return divide;
}

//Overload equality operators

bool RomanNumeral :: operator ==(const RomanNumeral &obj) const
{
    return (decimal == obj.decimal);
}

bool RomanNumeral :: operator !=(const RomanNumeral &obj) const
{
    return (decimal != obj.decimal);
}

//Overload input/output stream
ostream &operator<<(ostream &out, const RomanNumeral &obj)
{
    out << "[" << obj.decimal << ":" << obj.roman << "]";
    return out;
}

istream &operator>>(istream &in, RomanNumeral &obj)
{
string str;
in >> str;

obj.roman = str;
obj.to_decimal();

return in;
}

void RomanNumeral::to_decimal()
{
    string str = roman;
    decimal = 0;

    int decimalArray[str.length()];
    int i = 0;
    int sum = 0;
    int sub = 0;
    while (i < str.length())
    {
        if (str.at(i) == 'M')
        {
            decimalArray[i] = 1000;
        }
        else if (str.at(i) == 'D')
        {
            decimalArray[i] = 500;
        }
        else if (str.at(i) == 'C')
        {
            decimalArray[i] = 100;
        }
        else if (str.at(i) == 'L')
        {
            decimalArray[i] = 50;
        }
        else if (str.at(i) == 'X')
        {
            decimalArray[i] = 10;
        }
        else if (str.at(i) == 'V')
        {
            decimalArray[i] = 5;
        }
        else if (str.at(i) == 'I')
        {
            decimalArray[i] = 1;
        }

        i++;
    }
    for (int n = 0; n < str.length(); n++)
    {

        if (decimalArray[n] >= decimalArray[n + 1])
        {

            sum = sum + decimalArray[n];
            if (str.length() - 1 == (n + 1))
            {
                sum += decimalArray[n + 1];
                break;
            }
        }
        else
        {
            sub = abs(decimalArray[n] - decimalArray[n + 1]);

            sum = sum + sub;

            n++;
        }
    }
    decimal = sum;
}

void RomanNumeral :: to_roman()
{
    int num = decimal;
    while(num >= 1000)
    {
        roman += "M";
        num -= 1000;
    }
    if (num >= 900)
    {
        roman += "CM";
        num -= 900;
    }
    else if(num >=500)
    {
        roman += "D";
        num -= 500;
    }
    else if(num >= 400)
    {
        roman += "CD";
        num -= 400;
    }
    while (num >= 100)
    {
        roman += "C";
        num -= 100;
    }
    if(num >= 90)
    {
        roman += "XC";
        num -= 90;
    }
    else if( num >= 50)
    {
        roman += "L";
        num -= 50;
    }
    else if (num >= 40)
    {
        roman += "XL";
        num -= 40;
    }
    while(num >= 10)
    {
        roman += "X";
        num -= 10;
    }
    if(num >= 9)
    {
        roman += "IX";
        num -= 9;
    }
    else if (num >= 5)
    {
        roman += "V";
        num -= 5;
    }
    else if (num >= 4)
    {
        roman += "IV";
        num -= 4;
    }
    while (num >= 1)
    {
        roman += "I";
        num--;
    }


}
