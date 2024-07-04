class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k %= n; //Reducing k to avoid unnecessary rotation

        // reverse the entire array
        reverse(nums.begin(), nums.end()); 
        // reverse the first k elemnt
        reverse(nums.begin(), nums.begin() + k); 

        // reverse for remaing k element
        reverse(nums.begin() + k, nums.end());

    }
};
