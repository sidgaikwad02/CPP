// NAive approach
#include<iostream>
using namespace std;

void sorted(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        for(int j=i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<" ";
    }
}

int main() {
    int arr[] = {10,60,50,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sorted(arr, n);
}


#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[], int n) {
    
    sort(arr, arr+n);
    
    for(int i = 0; i < n; i++) {
        cout<< arr[i] <<" ";
    }
}

int main() {
    int arr[] = {10,60,50,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sorted(arr, n);
}
