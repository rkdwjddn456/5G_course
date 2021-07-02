#include <iostream>
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational;
std::ostream& operator<<(std::ostream& out,Rational& rhs);

class Rational
{
private:
    int n;
    int d;

public:
    //Rational();
    //Rational(int n);
    Rational(int n = 0 , int d = 0);
    ~Rational();
    
    Rational& operator=(const Rational& rhs);
    bool operator ==(const Rational& rhs);
    //Rational operator+(const Rational& rhs);
    //Rational operator-(const Rational& rhs);
    
    void num(int n);
    void den(int d);
    int num();
    int den();

};

#endif
