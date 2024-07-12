Binary Search Algorithm:
Below is the step-by-step algorithm for Binary Search:

Divide the search space into two halves by finding the middle index “mid”. 
Compare the middle element of the search space with the key. 
If the key is found at middle element, the process is terminated.
If the key is not found at middle element, choose which half will be used as the next search space.
If the key is smaller than the middle element, then the left side is used for next search.
If the key is larger than the middle element, then the right side is used for next search.
This process is continued until the key is round or the total search space is exhausted.

  Time complexity: O ( log N )
  Auxiliary Space: O(1)


  #include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    
    while(start <= end) {
        int mid = start + ( end - start) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }
        
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        
        else {
            end = mid + 1;
        }
        
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 90;
    
    int result = binarySearch(arr, 0, n-1, target);
    
    if(result != -1) {
        cout << "Element is found at index :" <<result <<endl;
    }
    else {
        cout <<"Element is not found in the array";
    }
    return 0;
}
