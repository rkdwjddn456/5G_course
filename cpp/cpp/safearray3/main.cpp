#include <iostream>
#include "safearray.h"
#include "invalidindex.h"

int main()
{
    Safearray arr1; //Safearray arr1(100);
    Safearray arr2(10); //Safearray arr2 = 10; (X)
    int nums[] = {1,2,3,4,5};
    Safearray arr3(nums,5);
    Safearray arr4(arr3);
    
    arr1=arr3;
    
    if(arr1==arr3)
        std::cout<<"arr1 and arr3 are equal"<<std::endl;
    else
        std::cout<<"arr1 and arr3 are not equal"<<std::endl;
    try
    {
        Array arr5(nums , 5);
        for(int i =0; i<=arr5.size(); ++i)
            std::cout<<arr5[i] << std::endl;
            
        //for(int i =0 ; i<=arr1.size(); ++i)
        //    std::cout<<arr1[i] <<std::endl;
            
        Array *parr = new Safearray(nums,5);
        
        (*parr)[5] = 5;  // (*parr).operator[](5) or parr->operator[](5)
    
        delete parr;   
    }
    catch (Invalidindex e)
    {
        std::cout <<"we receive a invalid index : "<< e.invalid()<<std::endl;
       
        return e.invalid();
    }
   
         
         
    return 0;
}
