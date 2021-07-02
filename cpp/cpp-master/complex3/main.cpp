#include <iostream>
#include "complex.h"

int main()
{
    Complex c1;
    //Complex c2(3.0);    
    Complex c2 =3.0;
    Complex c3(3.0,4.0);
    //Complex c4(c3);
    Complex c4 = c3;
    
    //c1.real(c3.real());
    //c1.imag(c3.imag());
    c1 =c3; // c1.operator(c3); or ::operator=(c1,c3);
    // c1.operator=(c3);
    
    c2 = 4.0; // c2.operator(4.0)
    //Complex tmp(4.0);
    //c2.operator=(tmp);
    //tmp.~Complex();   
    
    c2 = c1+c3; //c2.operator=(c1+c3) --> c2.operator=(c1.operator+(c3))
    c2 = c1-c3; //::operator-(c2,c1+c3) ---> ::operator-(c2,::operator-(c1,c3)))
    
    ++c4;
    c4++;
    
    //std::cout<<"c1: (" <<c1.real()<<", "<<c1.imag()<<"i)"<<std::endl;
    //std::cout<<"c2: (" <<c1.real()<<", "<<c2.imag()<<"i)"<<std::endl;
    //std::cout<<"c3: (" <<c1.real()<<", "<<c3.imag()<<"i)"<<std::endl;
    //std::cout<<"c4: (" <<c1.real()<<", "<<c4.imag()<<"i)"<<std::endl;
    
    std::cout<<"c1 : "<<c1<<std::endl;
    std::cout<<"c2 : "<<c2<<std::endl;
    std::cout<<"c3 : "<<c3<<std::endl;
    std::cout<<"c4 : "<<c4<<std::endl;
    
    //std::cout<< c1;  // std::cout.operator<<(c1) (X) or ::operator<<(std::cout,c1) (O)
    
    if(c1==c3)
    //if(c1.real()==c3.real() && c1.imag()==c3.imag())
        std::cout<<"c1 and c3 are eqaul"<<std::endl;
    else
        std::cout<<"c1 and c3 are not equal"<<std::endl;
    
    const Complex c5(3.0,4.0);
    //c5.real(5.0); (x)
    double re =c5.real();
            
    return 0;
}
