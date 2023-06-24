
//reference variable 
//change value with reference 

#include<iostream>

int main() {
    int x = 10, y = 20;
    int &ref = x;

    std::cout << ref << std::endl;              //10

    //change value with reference 
    ref = y;                                    //Internally ref is pointer and compiler dereference "reference var" - so here : *ref = 20 that means now value of x is 20
    std::cout << ref << std::endl;              //20
    std::cout << ref << std::endl;              //20


    return 0;
}