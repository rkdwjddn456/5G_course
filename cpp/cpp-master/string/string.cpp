#include <iostream>
#include <cassert>
#include <cstring>
#include "string.h"

std::ostream& operator<<(std::ostream& out ,const String& rhs)
{
    return out<<rhs.str;
} 

void String:: set_str(const char* str)
{
    if(str )
    {
        this->str = new char[strlen(str)+1];
        assert(this->str );
        strcpy(this->str , str);
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

String::String(const char *str, bool b)
{
    this->str = (char *)str;
    this->len = strlen(str);
}

/*String:: String()
{
    this->set_str(NULL);
}*/

String:: String(const char *str)
{
    this->set_str(str);
}

String:: String(const String& rhs)
{
    //this->str = rhs.str; (X)
    //this->len = rhs.len; (X)
    
    this->set_str(rhs.str);
}

String:: ~String()
{
    delete [] this->str;
}

String& String:: operator =(const String& rhs)
{
    if(this != &rhs)  //self- assignment test
    {
        delete [] this->str;
    
        this->set_str(rhs.str);        
    }
    return *this;
}

String& String:: operator=(const char* str)
{
    delete [] this->str;
    this->set_str(str);
    
    return *this;
}

bool String:: operator==(const String& rhs) const
{
    /*if(strcmp(this->str , rhs.str) == 0)
        return true;
    else
        return false;*/
    
    return strcmp(this->str , rhs.str) == 0;   
}

/*const String String::operator+(const String& rhs) const
{
    char *buf = new char[this->len + rhs.len + 1];
    assert(buf );
    strcpy(buf,this->str);
    strcat(buf,rhs.str);
    
    String result(buf);
    delete [] buf;
    
    return result;
}*/

const String String:: operator +(const String& rhs) const
{
    char *buf = new char [this -> len + rhs.len +1];
    assert(buf );
    strcpy(buf,this->str);
    strcat(buf, rhs.str);
    
    String result(buf,true);
    
    return result;    
}

const char* String:: c_str() const
{   
    return this->str;    
}

int String:: length() const
{
    return this->len;    
}
