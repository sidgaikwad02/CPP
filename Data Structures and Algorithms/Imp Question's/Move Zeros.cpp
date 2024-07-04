#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& nums) {
    int i = 0;
    
    for(int j = 0; j < nums.size(); j++) {
        if(nums[j] != 0) {
            swap(nums[j],nums[i]);
            i++;
        }
    }
}

int main() {
    vector<int> nums = {1,0,5,0,21,0};
    
    cout<< "Before: ";
    for(int num : nums) {
        cout<<num <<" ";
    }
    cout<<endl;
    
    moveZeros(nums);
    
    cout<<"After: ";
    for(int num : nums ) {
        cout<<num<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
