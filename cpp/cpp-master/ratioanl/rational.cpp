#include "rational.h"

Rational::Rational()
{
    this->n =0;
    this->d = 1;
}

Rational::Rational(int n)
{
    this->n = n;
    this->d = 1;
}

Rational::Rational(int n , int d)
{
    this->n = n;
    this->d = d;
}

Rational::~Rational()
{

}

void Rational::num(int n)
{
    this-> n = n;
}

void Rational::den(int d)
{
    this->d =d;
}

int Rational:: num()
{
    return this->n;
}

int Rational:: den()
{
    return this->d;
}
