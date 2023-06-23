
//Inline function


#include <iostream>
#define sum(x,y) x+y                    //inline function declaration
#define z 500

int main() {

    int x = 100, y = 200;

    std::cout << sum(x,y) << std::endl;             //Inline function call
    std::cout << z << std::endl;
    return 0;
}

//Note :
/*
    - Inline function doesn't push stack to the stack frame
    - we can not predict is function going to be inline or not , Its all depends on the CPU


    //Functtion will not Inline if
    - Function is recurssive 
    - Function is contains loops
    - Function contains static variables

*/