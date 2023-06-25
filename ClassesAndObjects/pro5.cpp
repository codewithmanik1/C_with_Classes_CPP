
#include<iostream>


class Demo {
    int x = 10, y = 20;

    public: 
    Demo(){
        std::cout << "In Construcotr" << std::endl;
        std::cout << this << std::endl;
    }

    void fun(){
        std::cout << x << y << std::endl;
    }
    
};

int main(){

    // Demo obj;
    // obj.fun();

    // delete obj;
    // obj.fun();

    Demo *obj1 = new Demo();
    obj1->fun();

    delete obj1;
    obj1->fun();                //get Garbage value after deleting Object : we don't have any error 


    return 0;
}