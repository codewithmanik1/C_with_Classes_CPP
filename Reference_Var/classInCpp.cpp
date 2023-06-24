

#include<iostream>

class Demo {
    int x = 10;

    public:
    void fun() {
        std::cout << x << std::endl;
    }
};

int main() {

    Demo obj;
    //std::cout << x << std::endl;                            //error : ‘x’ was not declared in this scope - beacuse x is private variable 
    
    //std::cout << obj.x << std::endl;           //error : ‘int Demo::x’ is private within this context - Only member function can accesse the private variables 
    
    obj.fun();                                                //Only member function can access the Variables of that class 
    return 0;
}