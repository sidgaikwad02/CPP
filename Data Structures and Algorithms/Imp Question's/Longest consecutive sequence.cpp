class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)return 0;

        sort(nums.begin(),nums.end());
        int LastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;

        for(int i=0;i<n;i++){
            if(nums[i] - 1 == LastSmaller){
                cnt += 1;
                LastSmaller = nums[i];
            }
            else if(nums[i] != LastSmaller){
                cnt = 1;
                LastSmaller = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;

    }
};
