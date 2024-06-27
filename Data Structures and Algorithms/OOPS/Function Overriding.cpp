// Run time polymorphism
// Function Overriding: Function overriding means Both parent and child class having same function but diffrent implementation included.

#include<iostream>
using namespace std;

class Parent {
    public:
        void getInfo() {
            cout <<"parent class \n";
        }
};

class Child : public Parent {
    public: 
        void getInfo() {
            cout <<"child class \n";
        }
};

int main() {
    Parent p1;
    p1.getInfo();
    
    return 0;
}
