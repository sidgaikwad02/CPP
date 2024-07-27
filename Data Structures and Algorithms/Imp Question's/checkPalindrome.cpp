#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &str, int n) {
    int i = 0;
    int j = n-1;
    
    while(i <= j) {
        if(str[i] == str[j]){
        i++;
        j--;
    }
    else{
        return false;
    }
    }
    return true;
}

int findLength(string &str){
    int length = 0;
    for(int i = 0;str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    int len = findLength(str);
    
    bool isPalindrome = checkPalindrome(str, len);
    
    if(isPalindrome) {
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }
    
}
