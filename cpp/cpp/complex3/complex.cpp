#include <iostream>
#include "complex.h"

std::ostream& operator<<(std::ostream& out,const Complex& rhs)
{
    out<<"(" << rhs.re<<", " <<rhs.im<<"i)";
    //out<<"(" << rhs.real() <<", "<<rhs.imag()<<"i)";
    return out;
}

Complex operator+(const Complex& lhs,const Complex& rhs)
{
    return Complex(lhs.re+rhs.re ,lhs.im+rhs.im);
    //return Complex(lhs.real() - rhs.real() , lhs.imag() - rhs.imag());
}

Complex operator-(const Complex& lhs,const Complex& rhs)
{
    return Complex(lhs.re-rhs.re ,lhs.im-rhs.im);
    //return Complex(lhs.real() - rhs.real() , lhs.imag() - rhs.imag());
}

/*Complex:: Complex()
{
    this->re =0.0;
    this->im =0.0;
}

Complex:: Complex(double re)
{
    this->re =re;
    this->im = 0.0;
}*/

Complex::Complex(double re, double im)
{
    this->re =re;
    this->im=im;
}

Complex:: Complex(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
}

Complex:: ~Complex()
{
    
}

Complex& Complex:: operator =(const Complex& rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
    
    return *this;
}

/*Complex Complex:: operator +(const Complex& rhs)
{
      Complex result(this->re + rhs.re , this->im + rhs.im);
      
      return result;
}

Complex Complex:: operator -(const Complex& rhs)
{     
      return Complex(this->re - rhs.re , this->im - rhs.im);
}*/

bool Complex:: operator ==(const Complex& rhs) const
{
    return (this->re == rhs.re && this->im==rhs.im);
}

const Complex& Complex:: operator++()
{
    this->re +=1.0;
    
    return *this;
}

const Complex Complex:: operator++(int )
{
    Complex result(*this);
    //this->re += 1.0;
    this-> operator++();
    
    return result;
}
 
double Complex:: real() const
{
    return this->re;
}

double Complex:: imag() const
{
    return this->im;
}

void Complex:: real(double re)
{
    this->re = re;
}

void Complex:: imag(double im)
{
    this->im =im;
}
