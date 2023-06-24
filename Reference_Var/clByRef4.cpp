

#include<iostream>

void fun(int &ref1, int &ref2){
    std::cout << "In function which has reference " <<std::endl;
}

void fun(int ref1, int ref2){
    std::cout << "In function which has reference " <<std::endl;
}
int main() {

    int x = 20, y = 50;

    fun(x,y);                       //error : call of overloaded ‘fun(int&, int&)’ is ambiguous : compiler doesn't understand where to go for run
    return 0;
}