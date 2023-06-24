

//structre in CPP   - We can initialized function and variable in Structure in CPP

#include<iostream>

struct Player {
    int jersNo = 18;
    char name[20] = "Virat Kohli";

void disp() {
    std::cout << jersNo << std::endl;
    std::cout << name << std::endl;
    
    }
};

int main() {
    Player obj;                 //create obj of CPP
    obj.disp();
}

