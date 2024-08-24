#include<bits/stdc++.h>
using namespace std;

int maxProductSubarray(int nums[], int n) {
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = 0;
    
    for(int i = 1; i < n;i++) {
        if(nums[i] < 0) 
            swap(maxProduct, minProduct);
        
        
        maxProduct = max(nums[i], maxProduct * nums[i]);
        minProduct = min(nums[i], minProduct * nums[i]);
        
        result = max(result, maxProduct);
    }
    return result;
}

int main() {
    int nums[] = { 1, -2, -3, 0, 7, -8, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    cout<<"Maximum product of subarray is: "<<maxProductSubarray(nums, n)<<endl;
    
}
