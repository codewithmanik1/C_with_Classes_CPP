
//static variable 

#include<iostream>


class Demo {

    int x = 10;
    //static int y = 20;                    //static member can not initialized in the class
    static int y;                           //This is right way

    public:
    
    static int z;
    void printData(){
        std::cout << x << y << z << std::endl;
    } 
};

int Demo::y = 20;                   //Initialization
int Demo::z = 50;

int main(){

    Demo obj;
    obj.printData();


    //update value of z
    obj.z = 100;
    std::cout << obj.z << std::endl;

    obj.printData();
    return 0;
}