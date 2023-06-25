
#include<iostream>

class Company {
    int empCount = 5000;
    std::string name = "IBM";

    public:
    Company() {
        std::cout << "In company constructor " << std::endl;
    }

    void cmpInfo() {
        std::cout << empCount << " " << name << std::endl;
    }

};

class Employee {
    int empId = 10;
    float empSal = 95.98f;

    public:
    Employee() {
        std::cout << "In Employee Constructor" <<std::endl; 
    }

    void empInfo(){
        std::cout << empId << " " << empSal <<std::endl;
    
        //create object of another class
        Company obj;
        obj.cmpInfo();
        
        //std::cout << obj.empCount << " " << obj.name <<std::endl;     //error : private var not been access they only access by memeber functions

    }
};

int main() {

    Employee *obj = new Employee();
    obj->empInfo();

    return 0;
}