#include<iostream>
using namespace std;

class Shape { //Abstraction class
    virtual void draw() = 0; //pure virtual funtion
};

class Circle : public Shape{
    public:
        void draw() {
            cout <<"Drawing the circle \n";
        }
};

int main() {
    Circle c1;
    c1.draw();
    
    return 0;
}
