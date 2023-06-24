


//Reference Bariable 

#include<iostream>

int main(){
    int x = 10;
    //reference variable 
    int &y = x;                                 // Internally : int* const y = &x
    int *ptr = &x;
    
    std::cout << x << std::endl;                //10
    std::cout << y << std::endl;                //10              
    std::cout << ptr << std::endl;              //0x100

    std::cout << &x << std::endl;               //0x100
    std::cout << &y << std::endl;               //0x100
    std::cout << &ptr << std::endl;             //0x200

    return 0;
}

/*
    Note:
        - Actually reference internally pointer
        - Compiler dereference "reference" automatically
*/