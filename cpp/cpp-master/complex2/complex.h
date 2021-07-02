#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double re;
    double im;
    
public:
    //Complex();
    //Complex(double re);
    Complex(double re = 0.0,double im = 0.0);
    Complex(const Complex &rhs);  //copy constructor
    
    void real(double re);
    void imag(double im);
    
    Complex& operator = (const Complex& rhs);
    bool operator == (const Complex& rhs);
    Complex operator+(const Complex& rhs);
    Complex operator-(const Complex& rhs);
    
    double real();
    double imag();
        
    ~Complex();
};

#endif
