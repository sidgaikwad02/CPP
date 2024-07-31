// check Anagram

#include<iostream>
#include<algorithm>
using namespace std;

bool checkAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) {
        return false;
    }
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    string str1,str2;
    cout<<"Enter a string1: ";
    getline(cin, str1);
    cout<<"Enter a string2: ";
    getline(cin, str2);
    
    int result = checkAnagram(str1, str2);
    
    if(result == true) {
        cout<<"Strings are anagram."<<endl;
    }
    else{
        cout<<"Strings are not anagram."<<endl;
    }
    
}
