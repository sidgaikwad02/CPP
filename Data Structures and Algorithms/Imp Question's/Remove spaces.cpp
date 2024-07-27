#include <iostream>
#include <cstring>
using namespace std;

void removeSpace(char *str) {
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[100]; // Allocate memory for the string
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a line of input including spaces

    removeSpace(str);
    cout << "String after removing spaces: " << str;
    return 0;
}
