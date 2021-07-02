#ifndef INVALID_INDEX_H
#define INVALID_INDEX_H

class Invalidindex
{
private:
    int index_;
    
public:
    //Invalidindex(); // is not generated
    //Invalidindex(const Invalid& rhs);
    //~Invalidindex();
    //Invalidindex& operator=(const Invalidindex& rhs);
    //Invalidindex* operator&();
    //const Invalidindex* operator&() const;
        
    Invalidindex(int index);
    
    int invalid() const;    
};

#endif
