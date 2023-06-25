
/*Variables :
    -Instance Variable (Non static Variable)
    -Static Variable (class Variables)

    Note :
    -Static Variable can not be initialize inside the class
    -Static variable can initialized outside the class
    -private Static var can not be access through obj , It can only acess with member function 

*/

#include<iostream>

class Demo{
    
    private:
    int x = 10;
    //static int y = 20;                //error : ISO C++ forbids in-class initialization of non-const static member ‘Demo::y’
    static int y;

    public:
    void fun() {
        std::cout << x << " " << y << std::endl;
    }
    
};


//Initialisation of Static var
int Demo::y = 20;

int main(){
    Demo obj;
    obj.fun();
    //std::cout << Demo::y << std::endl;
    return 0;
}