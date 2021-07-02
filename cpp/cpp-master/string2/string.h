#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <cstring>

//class String;


class String
{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
    char *str;
    int len;
    
    String(const char *str, bool b);
    
    void set_str(const char *str);
public:
    //String();
    String(const String& rhs);
    String(const char *str = NULL);
    ~String();
    
    String& operator=(const String& rhs);
    String& operator=(const char* str);
    
    bool operator==(const String& rhs) const;
    
    const String operator+ (const String& rhs) const;
    
    const char *c_str() const;
    int length() const;
    
    //String& operator=(const String& rhs){/* member copy */}
    //String* operator&{return this;}
    //const String* operator&() const {return this;}
};

#ifdef INLINE
#include "string.inl"
#endif

#endif
