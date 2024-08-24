#include<iostream>
using namespace std;

void printFibonacciSeries(int num) {
    int a = 0, b = 1, c;
    
    if(num == 0) {
        cout<<"0";
        return;
    }
    
    cout<<a<<" , " <<b;
    
    for(int i = 2; i < num; i++) {
        c = a + b;
        cout<<" , " <<c;
        a = b;
        b = c;
    }
    cout<<endl;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin >>num;
    
    cout<<"Fibanacci series upto "<<num<<" term is: ";
    printFibonacciSeries(num);
    return 0;
}
