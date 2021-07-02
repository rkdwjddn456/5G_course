inline std::ostream& operator<<(std::ostream& out ,const String& rhs)
{
    return out<<rhs.str;
} 

inline String::String(const char *str, bool b)
{
    this->str = (char *)str;
    this->len = strlen(str);
}

/*String:: String()
{
    this->set_str(NULL);
}*/

inline String:: String(const char *str)
{
    this->set_str(str);
}

inline String:: String(const String& rhs)
{
    //this->str = rhs.str; (X)
    //this->len = rhs.len; (X)
    
    this->set_str(rhs.str);
}

inline String:: ~String()
{
    delete [] this->str;
}

inline bool String:: operator==(const String& rhs) const
{
    /*if(strcmp(this->str , rhs.str) == 0)
        return true;
    else
        return false;*/
    
    return strcmp(this->str , rhs.str) == 0;   
}

inline const char* String:: c_str() const
{   
    return this->str;    
}

inline int String:: length() const
{
    return this->len;    
}
