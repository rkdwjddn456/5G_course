#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double re;
    double im;
    
public:
    Complex();
    Complex(double re);
    Complex(double re, double im);
    ~Complex();
    
    void real(double re);
    void imag(double im);
    
    double real();
    double imag();
};


#endif
