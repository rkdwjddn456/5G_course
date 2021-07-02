#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
    int n;
    int d;

public:
    Rational();
    Rational(int n);
    Rational(int n , int d);
    ~Rational();
    void num(int n);
    void den(int d);
    int num();
    int den();

};

#endif
