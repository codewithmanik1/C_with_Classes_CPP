
//local variable shadowing
//globle variable shadowing

    #include<iostream>

    int var = 10;
    int main(){

        int var = 20;                           //local variable shadowing
        std::cout << var << std::endl;          //20
        {
        
        int var = 30;                           //local variable shadowing
        std::cout << var << std::endl;          //30
        std::cout << ::var << std::endl;        //10 //global variable shadowing

        var = 50;
        std::cout << var << std::endl;          //50

        }

        std::cout << var << std::endl;         //20
    return 0;    
}