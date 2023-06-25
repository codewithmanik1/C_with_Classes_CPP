
#include<iostream>

class Demo {
    int x = 20, y = 50;

    public:
    Demo(){
        std::cout << "In the Construtor" << std::endl;
    }

    void fun(){
        std::cout << x <<" " << y << std::endl;
    }

};

int main() {
    Demo obj;
    obj.fun();
    
    return 0;
}