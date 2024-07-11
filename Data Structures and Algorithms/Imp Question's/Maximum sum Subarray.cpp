// KADANE'S ALGORITHM

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubarray(vector<int>& nums) {
    int sum = 0;
    int maxi = nums[0];
    
    for(int i = 0; i < nums.size(); i++) {
        
        sum = sum + nums[i];
        
        if(sum > maxi) {
            maxi = sum;
        }
        
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    vector<int> nums {-79, -68, -18, -58, 25, 52, -68, -30, 6, 10};
    
    int result = maxSubarray(nums);
    cout<<"Maximum subarray sum is: " <<result <<endl;
}
