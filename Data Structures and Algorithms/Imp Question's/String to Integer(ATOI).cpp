#include <iostream>
#include <string>
#include <climits>

int myAtoi(std::string s) {
    int i = 0;
    int sign = 1;
    long ans = 0;

    // Skip leading whitespaces
    while (i < s.length() && s[i] == ' ')
        i++;

    // Check sign of number
    if (i < s.length() && s[i] == '-') {
        sign = -1;
        i++;
    } else if (i < s.length() && s[i] == '+') {
        i++;
    }

    // Convert characters to integer
    while (i < s.length()) {
        if (s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');

            // Check for overflow
            if (ans > INT_MAX && sign == -1)
                return INT_MIN;
            else if (ans > INT_MAX && sign == 1)
                return INT_MAX;

            i++;
        } else {
            break;
        }
    }

    return ans * sign;
}

int main() {
    std::string str;

    // Test the function with different inputs
    str = "42";
    std::cout << "Input: \"" << str << "\", Output: " << myAtoi(str) << std::endl;

    str = "   -42";
    std::cout << "Input: \"" << str << "\", Output: " << myAtoi(str) << std::endl;

    str = "4193 with words";
    std::cout << "Input: \"" << str << "\", Output: " << myAtoi(str) << std::endl;

    str = "words and 987";
    std::cout << "Input: \"" << str << "\", Output: " << myAtoi(str) << std::endl;

    str = "-91283472332";
    std::cout << "Input: \"" << str << "\", Output: " << myAtoi(str) << std::endl;

    return 0;
}
