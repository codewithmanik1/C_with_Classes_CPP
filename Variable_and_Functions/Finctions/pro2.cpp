
//constant 

#include<iostream>

int main() {
    int x = 20, y = 10;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    
    const int *ptr = &x;                            //Here data is constant through pointer but we can change the data with help of variable 
    std::cout << *ptr << std::endl; //20

 //   *ptr = 100;                                   //error : assignment of read-only location ‘* ptr’
 //   std::cout << *ptr << std::endl; //100

    
    int* const ptr1 = &x;                           //constant pointer
    ptr1 = &y;                                      //error
    std::cout << *ptr1 << std::endl; //10


    return 0;
}