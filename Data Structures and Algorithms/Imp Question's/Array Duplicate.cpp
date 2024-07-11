#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

    vector<int> duplicates(vector<long long> arr) {
        unordered_map<long long, int> elementCount;
        vector<int> result;

        // Count occurrences of each element
        for (auto num : arr) {
            elementCount[num]++;
        }

        // Collect elements that appear more than once
        for (auto &pair : elementCount) {
            if (pair.second > 1) {
                result.push_back(pair.first);
            }
        }

        // If no duplicates are found, return a vector with -1
        if (result.empty()) {
            return {-1};
        }

        // Sort the result to maintain a consistent order
        sort(result.begin(), result.end());

        return result;
    }


// Example usage
int main() {
    vector<long long> arr = {1, 2, 3, 1, 3, 6, 6};
    
    vector<int> duplicates = solution.duplicates(arr);
    
    for (int num : duplicates) {
        cout << num << " ";
    }
    
    return 0;
}
