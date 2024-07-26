#include<iostream>
using namespace std;

string toggleString(string str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i]-32;
        }
    }
    return str;
}

int main() {
    string str;
    cout<<"Entr a string: ";
    getline(cin, str);
    
    cout<<" Toggeled string is: "<<toggleString(str)<<endl;
}
