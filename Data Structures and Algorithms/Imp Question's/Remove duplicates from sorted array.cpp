class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[a] = nums[i];
                a++;
            }
        }
        return a;
    }
};

// Method : 2


#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int arr[] = {10,20,20,30,40,40,50,60,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int ,int> mp;
    
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    for(auto it : mp) {
        if(it.second > 1) {
            cout<<it.first<<" ";
        }
    }
    cout<<endl;
}
