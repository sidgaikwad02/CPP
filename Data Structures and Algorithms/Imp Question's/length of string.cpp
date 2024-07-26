#include<iostream>
using namespace std;

int findLength(string str) {
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main() {
    string str;
    cout<<"Entr a string: ";
    getline(cin, str);
    
    cout<<"Length of string is: "<<findLength(str)<<endl;
}
