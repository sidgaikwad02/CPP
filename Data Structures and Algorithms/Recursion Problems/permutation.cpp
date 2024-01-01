#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void Helper(vector<int>& nums, int i) {
        if (i == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            swap(nums[i], nums[j]);
            Helper(nums, i + 1);
            // backtracking
            swap(nums[i], nums[j]);
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        Helper(nums, 0);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> result = s.permute(nums);

    // Displaying the permutations generated
    for (const auto& perm : result) {
        cout << "[";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
