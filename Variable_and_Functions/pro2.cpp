#include<iostream>

int main(){
    int x = 10;
    int y = 20.5f;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    int a{10};
    float b{10.5f};   

    std::cout << a << std::endl;    
    std::cout << b << std::endl;

    return 0;    
}