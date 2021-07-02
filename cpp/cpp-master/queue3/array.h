#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

class Array
{
private:
    static const int ARRAYSIZE;
    int *parr;
    int size_;
    
public:
    //Array();
    explicit Array(int size = ARRAYSIZE);
    Array(const int *parr , int size);
    Array(const Array& rhs);        
    ~Array();
    Array& operator=(const Array& rhs);
    
    bool operator == (const Array& rhs) const;
    int& operator [](int index);
    const int& operator [](int index) const;
    int size() const;   
};

#endif
