#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0, temp = n;
    
    while(temp > 0) {
        rev = rev * 10 + temp% 10;
        temp /= 10;
    }
    
    return n == rev;
}

int main() {
    int arr[] = {1, 121, 55551, 545545, 10111, 90};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int maxPalindrome = -1;
    
    for(int i = 0; i < n; i++) {
        if(isPalindrome(arr[i]) && arr[i] > maxPalindrome) {
        maxPalindrome = arr[i];
    }
    }

    cout<<maxPalindrome<<endl;
}
