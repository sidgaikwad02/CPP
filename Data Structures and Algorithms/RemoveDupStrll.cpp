#include<iostream>
#include<vector>
using namespace std;

string removeDuplicates(string s, int k) {
    int i = 0, j = 0;
    vector<int> count(s.size());

    while (j < s.size()) {
        s[i] = s[j];
        count[i] = 1;

        if (i > 0 && s[i - 1] == s[i])
            count[i] += count[i - 1];

        if (count[i] == k)
            i -= k;
        
        i++;
        j++;
    }
    return s.substr(0, i);
}

int main() {
    string inputString = "deeedbbcccbdaa";
    int k = 3; // or any value you want
    
    string result = removeDuplicates(inputString, k);
    
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
