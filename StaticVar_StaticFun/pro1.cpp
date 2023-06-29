
//static variable in C
#include<iostream>


int fun () {
    static int x = 10;                      //static variable in C , give memory on the data section
    return ++x;
}

int main(){
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    
    return 0;
}