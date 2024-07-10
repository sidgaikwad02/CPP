#include<iostream>
using namespace std;

int getMin(int arr[], int n) {
    int res = arr[0];
    for(int i=1;i<n;i++) {
        res = min(res, arr[i]);
    }
    return res;
}

int getMax(int arr[] , int n) {
    int res = arr[0];
    for(int i=0;i<n;i++) {
        res = max(res, arr[i]);
    }
    return res;
}
int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Minimum number of array is:" <<getMin(arr, n) <<endl;
    cout<<"Maximum number of array is:" <<getMax(arr,n) <<endl;
}
