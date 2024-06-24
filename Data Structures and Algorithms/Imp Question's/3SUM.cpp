// This solution will give a TLE
// time complexity: O(n^3)

// Approach 1: Brute force
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                for(int k=j+1; k<nums.size(); k++) {
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin() , temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin() ,st.end());
        return ans;
    }
};

// Approach 2: Hashing
// This is solotion might give TLE
// time complexity: O(n^2)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0; i< nums.size(); i++) {
            set<int> hashset;  //Empty set
            for(int j= i+1; j<nums.size(); j++){
                int third = -(nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp = {nums[i] ,nums[j], third};
                    sort(temp.begin() ,temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;

    }
};

// Aproach 3: Two pointers
// Optimal solution
// time complexity : (n logn + O(n)^2


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip duplicates for the first number
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicates for the second number
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    // Skip duplicates for the third number
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        return ans;
    }
};
