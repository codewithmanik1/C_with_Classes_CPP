
#include<iostream>

class Demo {
    int x = 10;

    void fun(){
        std::cout << x << std::endl;
    }
};

int main(){

    Demo obj;       
    obj.fun();                                              //error : void Demo::fun()’ is private within this context
    std::cout << obj.x << std::endl;                        //error : ‘int Demo::x’ is private within this context
    return 0;

}


/*
    Notes :
    
    - All data members and function bydefault Private in Class
    - Constructor Bydefault is Public(default constructor only) 
*/

