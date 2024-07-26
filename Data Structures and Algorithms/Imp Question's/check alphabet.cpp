#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    
    if((ch>= 'a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z'))
    cout<<"The inserted character "<<ch<<" is alphabet"<<endl;
    
    else
    cout<<"The inserted character "<<ch<<" is not alphabet"<<endl;
}
