//
// Created by sai srinivas lakkakula on 8/3/21.
//

#ifndef LETTCODE_ROMANNUMERAL_H
#define LETTCODE_ROMANNUMERAL_H
#include <string>
#include <ostream>
#include <istream>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;
class RomanNumeral {
private:
    // private member variables
    int decimal;
    string roman;
    // private member functions
    void to_decimal();
    void to_roman();

public:
    // Default constructor
    RomanNumeral();

    //Connstructor with integer parameter
    RomanNumeral(int d);

    //Constructor with string parameter
    RomanNumeral(string r);

    //getter functions that returns RomanNumeral's object
    int get_decimal() const;
    string get_roman() const;

    //Overload Arithmetic operators
    RomanNumeral operator -(const RomanNumeral & obj) const;
    RomanNumeral operator +(const RomanNumeral & obj) const;
    RomanNumeral operator *(const RomanNumeral & obj) const;
    RomanNumeral operator /(const RomanNumeral & obj) const;

    //Overload equality operators
    bool operator ==(const RomanNumeral &obj)const;
    bool operator !=(const RomanNumeral &obj)const;

    //Overload input/output stream
    friend ostream& operator<<(ostream& out,  const RomanNumeral &obj);
    friend istream& operator>>(istream& in,  RomanNumeral &obj);
};


#endif //LETTCODE_ROMANNUMERAL_H
