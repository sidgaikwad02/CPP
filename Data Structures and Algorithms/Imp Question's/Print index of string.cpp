// simple
#include <iostream>
#include <string>
using namespace std;

void Print(string s, int size, int index, char target) {
    // base case
    if(index >= size) {
        return; // End of string
    }
    
    // processing
    if(target == s[index]) {
        cout << "Index of '" << target << "' is: " << index << endl;
    }
    
    // recursive call
    Print(s, size, index + 1, target);
}

int main() {
    string s = "Babbar";
    int size = s.length();
    int index = 0;
    char target = 'a';
    
    Print(s, size, index, target);
    
    return 0;
}


// Vector
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Print(string& s, int size, int index, char target, vector<int>& ans) {
    
    if(index >= size) {
        return;
    }
    
    if(target == s[index]) {
        ans.push_back(index);
    }
    
    Print(s, size, index+1,target,ans);
}

int main() {
    string s = "Siddharth";
    int size = s.length();
    int index = 0;
    char target = 'd';
    
    vector<int>ans;
    Print(s,size,index,target,ans);
    
    cout<<"Index of '" <<target <<"'is:";
    for(int str: ans) {
        cout <<str << " ";
    }
    cout<<endl;
    return 0;
}
