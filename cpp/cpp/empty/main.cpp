#include <empty.h>

int main()
{
    Empty e1;
    Empty e2 = e1;
    
    
    e1 = e2;
    
    Empty *p = &e1;
    
    const Empty e3;
    const Empty *p2 = &e3;
    
    return 0;
}
