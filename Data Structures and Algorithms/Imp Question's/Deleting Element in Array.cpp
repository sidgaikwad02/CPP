#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }
        
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end -start) /2;
    }
    return -1;
}

int deleteElement(int arr[], int n, int target) {
    int pos = binarySearch(arr, 0, n-1, target);
    
    if(pos == -1) {
        cout<<"Element not found";
        return n;
    }
    
    for(int i = pos; i < n-1; i++) 
        arr[i] = arr[i+1];
        return n-1;
    
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int target = 30;
    
    cout<<"Before deletion of array: ";
    for(int i = 0;i < n; i++) {
        cout<<arr[i] <<" ";
    }
    
    n = deleteElement(arr, n, target);
    
    cout <<"\nAfter deletion of array: ";
    for(int i = 0; i  <n; i++) {
        cout<<arr[i] <<" ";
    }
}
