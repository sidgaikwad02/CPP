// Function overloading:
                        Function means having same name but different in parameter.


#include<iostream>
using namespace std;

class Print {
public: 
    void show(int x) {
        cout << "int :" << x <<endl;
    }
    
    void show(char ch) {
        cout << "char" <<ch <<endl;
    }
};

int main() {
    Print p1;
    p1.show(101);
    return 0;
}
