// We have done with Include & Exclude Pattern 


#include<iostream>
using namespace std;

void findSubsequences(string str, string output, int index) {
    
    if(index >= str.length()) {
        
        cout << "->" <<output <<endl;
        return;
    }
    
    char ch = str[index];
    
    // exclude
    
    findSubsequences(str,output,index+1);
    
    // include
    
    output.push_back(ch);
    findSubsequences(str,output,index+1);
}

int main() {
    string str = "abc";
    string output = "";
    int index = 0;
    findSubsequences(str,output,index);
    
}
