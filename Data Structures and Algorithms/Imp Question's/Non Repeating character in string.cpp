#include<iostream>
using namespace std;

char nonRepeatingCharacter(string str) {
    int freq[250]= {0};
    
    for(int i = 0; i < str.length();i++) {
        freq[str[i]]++;
    }
    
    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] == 1) {
            return str[i];
        }
    }
    return -1;
}

int main() {
    string str;
    cout<<"Enetr a string: ";
    getline(cin, str);
    
    char result = nonRepeatingCharacter(str);
    
    if(result != -1) {
        cout<<"The non repeating character in a string is: "<<result<<endl;
    }
    else{
        cout<<"There is no Non repeating character in a string"<<endl;
    }
}
