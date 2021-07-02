#include "rational.h"

/*Rational::Rational()
{
    this->n =0;
    this->d = 1;
}

Rational::Rational(int n)
{
    this->n = n;
    this->d = 1;
}*/

Rational::Rational(int n , int d)
{
    this->n = n;
    this->d = d;
}

Rational::~Rational()
{

}

Rational& Rational::operator =(const Rational& rhs)
{
    this->n = rhs.n;
    this->d = rhs.d;
    return *this;    
}

bool Rational:: operator ==(const Rational& rhs)
{
    return (this->n ==rhs.n && this->d == rhs.d);
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
