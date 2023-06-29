
#include<iostream>

class Player {
    int jersNo = 18;
    std::string name = "virat";

    public:
    void info(){
        std::cout << jersNo << " " << name << std::endl; 
    }
};

int main(){

    //Object Creation on the stack;
    Player obj;
    obj.info();

    //Object creation on the Heap 
    Player *obj1 = new Player();
    obj1->info();

    return 0;
}