#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int n) {
    int rev = 0, temp = n;
    
    while(temp > 0){
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    
    if(n == rev ) 
        return 1;
        
    return 0;
}

int main() {
    int arr[] = {1, 121, 55551, 545545, 10111, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = INT_MIN;
    
    for(int i = 0;i < n; i++) {
        if(isPalindrome(arr[i]) && res < arr[i]) 
            res = arr[i];
        
    }
    
    if (res == INT_MIN)
        res = -1;
        
        cout<<res;
    
    return res;
    
}
