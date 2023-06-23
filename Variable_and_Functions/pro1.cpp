#include<iostream>

int main(){
    int x = 10;     //copy initialization
    int y(20);      //direct initialization
    int z{30};      //brace/list/uniform initialization

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
    return 0;
}