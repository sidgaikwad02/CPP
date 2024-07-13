#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        // Swap characters at left and right pointers
        swap(str[left], str[right]);
        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // To input string with spaces
    
    reverseString(str);
    
    cout << "Reversed string: " << str << endl;
    
    return 0;
}
