#ifndef SHAPE_H
#define SHAPE_H

class Shape  // Abstract Base Class(ABC)
{
//private:
protected:
    int x_;
    int y_;
    
public:
    //Shape(); is not used
    //Shape(const Shape& rhs); // can not used
    //Shape& operator=(const Shape&);
    
    Shape(int x, int y);    
    virtual ~Shape() {}
    
    void move(int x, int y);
    //double area() const;
    virtual double area() const = 0; // pure virtual fuction
};
#endif
