#include <iostream>
#include <string>

int expand(const std::string &s, int i, int j) {
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(const std::string &s) {
    int totalcount = 0;
    for (int center = 0; center < s.length(); center++) {
        // ODD
        int oddKaAns = expand(s, center, center);

        // EVEN
        int evenKaAns = expand(s, center, center + 1);

        totalcount = totalcount + oddKaAns + evenKaAns;
    }
    return totalcount;
}

int main() {
    std::string s = "abc"; // Example string
    int result = countSubstrings(s);
    std::cout << "The number of palindromic substrings in \"" << s << "\" is: " << result << std::endl;
    return 0;
}
