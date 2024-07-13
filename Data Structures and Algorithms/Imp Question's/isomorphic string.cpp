#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    vector<int> indexS(200, 0); // Array to store last seen positions of characters in s
    vector<int> indexT(200, 0); // Array to store last seen positions of characters in t

    int len = s.length();

    if (len != t.length()) {
        return false; // If lengths are not equal, strings are not isomorphic
    }

    for (int i = 0; i < len; i++) {
        if (indexS[s[i]] != indexT[t[i]]) {
            return false; // If last seen positions are different, strings are not isomorphic
        }

        indexS[s[i]] = i + 1; // Update last seen position for s[i]
        indexT[t[i]] = i + 1; // Update last seen position for t[i]
    }
    return true;
}

int main() {
    string s1 = "egg";
    string s2 = "add";

    if (isIsomorphic(s1, s2)) {
        cout << s1 << " and " << s2 << " are isomorphic." << endl;
    } else {
        cout << s1 << " and " << s2 << " are not isomorphic." << endl;
    }

    string s3 = "foo";
    string s4 = "bar";

    if (isIsomorphic(s3, s4)) {
        cout << s3 << " and " << s4 << " are isomorphic." << endl;
    } else {
        cout << s3 << " and " << s4 << " are not isomorphic." << endl;
    }

    return 0;
}
