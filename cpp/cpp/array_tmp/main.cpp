#include <iostream>
#include "array.h"

int main()
{
    Array arr1;
    Array arr2(10);
    
    int nums[] = {1,2,3,4,5};
    Array arr3(nums , 5);
    Array arr4(arr3);
    
    if(arr3 == arr4)
        std::cout<<"arr3 and arr4 are equal"<<std::endl;
    else
        std::cout<<"arr3 and arr4 are not equal"<<std::endl;
    
    for(int  i =0 ; i<arr3.size() ; ++i)
        std::cout<<arr3[i]<<std::endl;
    
       
    return 0;
}
