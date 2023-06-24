

#include<iostream>

int& fun(int x) {
    int y = x;                  //warning: reference to local variable ‘y’ returned
    return y;                   //warning : 
}
int main() {

    int x = 20;

    int ret = fun(x);        
    std::cout << ret << std::endl;

    return 0;
}

//Segmentation fault in Above code 