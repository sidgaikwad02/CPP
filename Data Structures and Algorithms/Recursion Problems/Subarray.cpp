#include<iostream>
#include<vector>
using namespace std;

void PrintSubarray(vector<int> &nums, int start, int end){

// base case
    if(end == nums.size()){
        return;
    }

    // Ek case tum solve kro

    for(int i = start; i<=end; i++){
        cout <<nums[i]<<" ";
    }

    cout<<endl;

    // Recursive call

    PrintSubarray(nums, start, end+1);

  
}

int main() {

    vector<int>nums{1,2,3,4,5};
    PrintSubarray(nums,0,0);

}
