#include<iostream>
using namespace std;

bool isPalindrom(string &s, int start, int end){

    // base case
    if(s[start] >= s[end]){
        return true;
    }

    // ek case tum solve kro
    if(s[start] != s[end]){
        return false;
    }

    // baki recursion sambhal lega:)

    return isPalindrom(s, start+1, end-1);
}

int main(){

    string s;
    cin >> s;

    cout << isPalindrom(s, 0, s.size()-1)<<endl;
}
