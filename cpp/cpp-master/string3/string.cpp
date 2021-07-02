#include <iostream>
#include <cassert>
#include <cstring>
#include "string.h"

Stringrep:: Stringrep(const char *str)
{
    if(str )
    {
        this->str = new char[strlen(str)+1];
        assert(this->str );
        strcpy(this->str, str);
        this->len = strlen(str);
    }
    else
    {
        this->str = new char[1];
        assert(this->str );
        this->str[0] = '\0';
        this->len = 0;
    }
}

Stringrep:: ~Stringrep()
{
    delete [] this->str;
}

std::ostream& operator<<(std::ostream& out ,const String& rhs)
{
    return out<<rhs.c_str();
} 

String:: String(const char *str)
{
   this->rep = new Stringrep(str);
   this->rep->rc=1;
}

String:: String(const String& rhs)
{
   this->rep = rhs.rep;
   ++this->rep->rc;  
}

String:: ~String()
{
   --this->rep->rc;
   if(this->rep->rc ==0) delete this->rep;
}

String& String:: operator =(const String& rhs)
{
    if(this != &rhs)
    {
        --this->rep->rc;
        if(this->rep->rc == 0)
            delete this->rep;
        this->rep = rhs.rep;
        ++this->rep->rc;    
    }
    
    return *this;
}

bool String:: operator==(const String& rhs) const
{
    return strcmp(this->rep->str , rhs.rep->str) == 0;
}

const String String:: operator +(const String& rhs) const
{
    char *buf = new char[this->rep->len + rhs.rep->len +1];
    assert(buf );
    strcpy(buf,this->rep->str);
    strcat(buf,rhs.rep->str);
    
    String result(buf);
    delete [] buf;
    
    return result;
}

const char* String:: c_str() const
{   
    return this->rep->str;
}

int String:: length() const
{
    return this->rep->len;        
}
