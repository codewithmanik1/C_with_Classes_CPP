
//Constant Variable 

#include<iostream>

int main() {

    int y;
    std::cout << "Enter the value" << std::endl;    
    std::cin >> y;                                      //20
    
    const int x = y;                                    
    std::cout << x << std::endl;                        //20

    x = 100;                                    //error : error: assignment of read-only variable ‘x’
    std::cout << x << std::endl;           

    return 0;
}