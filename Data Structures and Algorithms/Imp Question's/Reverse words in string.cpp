class Solution {
    public: string reverseWords(string s) {
        // Trim the input string to remove leading and trailing spaces
        string str[] = s.trim().split("\\s+");

        // Initialize the output string
        string out = "";

        // Iterate through the words in reverse order
        for (int i = str.length - 1; i > 0; i--) {
            // Append the current word and a space to the output
            out += str[i] + " ";
        }

        // Append the first word to the output (without trailing space)
        return out + str[0];
    }
}
