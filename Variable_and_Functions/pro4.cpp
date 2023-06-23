
//Reference Variable concepts

#include<iostream>

int main(){

    int x = 10;
    
    int &y = x;             //This is a reference variable

    std::cout << x << std::endl;            //10
    std::cout << y << std::endl;            //10

    std::cout << &x << std::endl;           //0x100
    std::cout << &y << std::endl;           //0x100

    return 0;
}

//Note :
//Reference -  &refercing variable has same address which variable have