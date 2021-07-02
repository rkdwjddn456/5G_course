#include "complex.h"
/*
Complex:: Complex()
{
    this -> re = 0.0;
    this -> im = 0.0;
}*/
/*
Complex:: Complex(double re)
{
    this ->re = re;
    this ->im = 0.0;
}*/

Complex:: Complex(double re,double im)
{
    this->re = re;
    this->im = im;
}

Complex:: Complex(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
}

Complex:: ~Complex()
{

}

Complex& Complex:: operator = (const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
    
    return *this;
}

bool Complex:: operator ==(const Complex& rhs)
{
    if(this->re == rhs.re && this->im == rhs.im)
        return true;
    else
        return false;
    
    //return (this->re == rhs.re && this->im == rhs.im);        
}

Complex Complex::operator +(const Complex& rhs)
{
    Complex result(this->re + rhs.re , this->im + rhs.im);
    
    return result;
}

Complex Complex::operator -(const Complex& rhs)
{
    Complex result(this->re - rhs.re , this->im - rhs.im);
    
    return result;
}

void Complex:: real(double re)
{
    this->re = re;
}

void Complex:: imag(double im)
{
    this->im = im;
}

double Complex:: real()
{
    return this->re;
}

double Complex:: imag()
{
   return this->im;
} 
