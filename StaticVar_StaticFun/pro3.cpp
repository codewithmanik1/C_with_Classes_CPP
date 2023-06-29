
//static function

#include<iostream>


class Demo {

    int x = 10;
    static int y;

    public:
    void disp(){
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }

    //static funtion
    static void info() {
        //std::cout << x << std::endl;                              //In static funtion we can not access instance variables
        std::cout << y << std::endl;
    }
};

int Demo::y = 20;

int main() { 

    Demo obj;
    obj.disp();

    //ways to access static function
    obj.info();
    Demo::info();

    return 0;

}