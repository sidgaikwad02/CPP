#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    Person () {
        cout << "parent constructor..\n";
    }
};

class Student : public Person{
public:
    int rollno;
    
    Student() {
        cout <<"student contructor ..\n";
    }
    
    void getInfo() { //Member function
        cout <<"name :" << name <<endl;
        cout <<"age :" <<age <<endl;
        cout <<"rollno :" <<rollno <<endl;
    }
};

int main() {
    Student s1;
    s1.name = "Siddharth";
    s1.age = 21;
    s1.rollno = 21102025;
    
    s1.getInfo(); //calling member function
    return 0;
}
