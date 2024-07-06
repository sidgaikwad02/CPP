#include<iostream>
#include<string>
#include<set>

using namespace std;

int lengthOfLongestsubstring(string s) {
    set<char> Set;
    int Max = 0;
    int start = 0;
    int end = 0;
    
    while(start < s.size()) {
        auto it = Set.find(s[start]);
        
        if(it == Set.end()){
            if(start - end + 1 > Max) 
                Max = start - end + 1;
                Set.insert(s[start]);
                start++;
            }
            else {
                Set.erase(s[end]);
                end++;
            }
        }
        return Max;
    }


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int result = lengthOfLongestsubstring(s);
    cout<<"The length of longest substring without repeating character is: " <<result<<endl;
}
