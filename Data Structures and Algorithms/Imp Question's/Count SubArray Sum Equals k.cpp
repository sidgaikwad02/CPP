#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0;
        int cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            preSum += arr[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 1, 1};
    int k = 2;
    
    int result = solution.subarraySum(arr, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
