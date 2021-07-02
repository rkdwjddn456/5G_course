#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:   
    
    int *parr_; 
    
protected:
    static const int ARRAYSIZE;
    int size_;
    
public:
        
    static int getarraysize();
    //Array* operator&();
    //const Array* operator &() const;

    //Array();
    explicit Array(int size = Array:: ARRAYSIZE);
    Array(const int *parr, int size);
    Array(const Array& rhs);
    ~Array();
    
    Array& operator =(const Array& rhs);
    bool operator ==(const Array& rhs) const;
    int& operator [](int index);
    const int& operator [](int index) const;
    int size() const;   
};

#endif
