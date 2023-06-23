

//Inline function

#include<iostream>

inline int sum(int x, int y){                          //Inline function
    return x+y;

}


int main() {

    int x = 100, y = 200;
    std::cout << sum(x,y) << std::endl;

    return 0;
}