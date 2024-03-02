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
