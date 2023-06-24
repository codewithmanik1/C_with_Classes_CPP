
//call By reference
//Swap by using reference

#include<iostream>

void fun(int &ref1, int &ref2){
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
int main() {

    int x = 20, y = 50;
    std::cout << x << " " << y << std::endl;
    
    fun(x,y);        
    std::cout << x << " " << y << std::endl;

    return 0;
}