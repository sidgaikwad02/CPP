// for first element
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

//for all
#include <iostream>
using namespace std;

void nonRepeatingCharacters(string str) {
    int freq[256] = {0};

    // Count occurrences of each character
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Print all non-repeating characters
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            cout << str[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No non-repeating characters found in the string.";
    }
    cout << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "The non-repeating characters in the string are: ";
    nonRepeatingCharacters(str);

    return 0;
}

