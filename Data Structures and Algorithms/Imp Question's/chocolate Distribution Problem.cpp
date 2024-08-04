#include<bits/stdc++.h>
using namespace std;

int findDiff(int arr[], int n, int m) {
    if(m == 0 || n == 0) {
        return 0;
    }
    
    sort(arr, arr + n);
    
    
    if(n < m) {
        return -1;
    }
    
    int min_diff = INT_MAX;
    
    for(int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if(diff < min_diff)
        min_diff = diff;
    }
    return min_diff;
}


int main() {
    int arr[] = {7,3,2,4,9,12,56};
    int m = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Minimum diffrence is: " <<findDiff(arr, n , m);
    return 0;
}
