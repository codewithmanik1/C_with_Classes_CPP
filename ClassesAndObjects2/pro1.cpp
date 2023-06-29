
#include<iostream>

class Demo {
    int x = 10;

    protected:
    int y = 20;

    public:
    int z = 30;

    void fun(){
        std::cout << x << y << z << std::endl;
    }

};

int main() {

    Demo obj;
    //std::cout << obj.x << obj.y << obj. z << std::endl;              //error : private and protected var can access only by member function
    obj.fun();
    return 0;
}