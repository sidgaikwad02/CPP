#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s <= e) {
        int diff = arr[mid] - mid;
        
        if(diff == 1) {
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans+1;
}


int main() {
    int arr[] = {1,2,3,4,5,6,8,9};
    int n = 8;
    
    cout<<"Missing number is: "<<findMissingNumber(arr,n)<<endl;
}
