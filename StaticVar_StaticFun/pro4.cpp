

//globle static & local static 

#include<iostream>


class Demo{ 

    int x = 10;
    int static y;                                  //static globle variable

    public:
    void fun(){

        int static a = 100;                       //static local variable
        std::cout << x << std::endl;
        std::cout << y << std::endl;

        std::cout << a << std::endl;
    }

    static void gun(){
        int static b = 200;                       //static local variable
        //std::cout << x << std::endl;                  //instance Var can not access in the static function
        std::cout << y << std::endl;

        std::cout << b << std::endl;
    }
};
int Demo::y = 20;

int main(){

    Demo obj;
    obj.fun();
    Demo::gun();

    return 0;
}