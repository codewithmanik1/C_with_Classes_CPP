
#include<iostream>

class Demo{

    int x = 10, y = 50;

    public:
    Demo(){
        std::cout<< "In Constructor" << std::endl;
    }

    void fun(){
        std::cout << x << " " << y << std::endl;
    }
};

int main(){

    //Object create on the Stack
    Demo obj;
    obj.fun();

    //Object create on the Heap section
    Demo *obj1 = new Demo();
    //In this case we access data by two ways 
    obj1 -> fun();                              //1
    (*obj1).fun();                              //2

    return 0;
}