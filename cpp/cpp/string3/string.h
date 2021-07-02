#ifndef STRING_H
#define STRING_H
#include <iostream>

class Stringrep
{
friend class String;

private:
    char *str;
    int len;
    int rc;
        
    Stringrep(const Stringrep& rhs);     //not use
    Stringrep& operator=(const Stringrep& rhs);//not use
    
    Stringrep(const char *str = NULL); //only used by string mem.fun
    ~Stringrep();                      //only used by string mem.fun 
public:   
    
};


class String
{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
    Stringrep *rep;
       
public:    
    String(const String& rhs);
    String(const char *str = NULL);
    ~String();
    
    String& operator=(const String& rhs);
   
    bool operator==(const String& rhs) const;
    
    const String operator+ (const String& rhs) const;
    
    const char *c_str() const;
    int length() const;
        
};

#endif
