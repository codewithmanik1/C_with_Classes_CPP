
//Call by reference - pre Requisite code 
#include<iostream>

void fun(int *val){
    *val = 30;
    std::cout << val << std::endl;
}

int main() {

    int x = 10;
    std::cout << x << std::endl;

    fun(x);                                 //error : invalid conversion from ‘int’ to ‘int*’  - beacuse we send value and function takes pointer in para
    std::cout << x << std::endl;

    return 0;
}