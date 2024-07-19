#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {15,23,45,78,96,54,35,68,84};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int first = INT_MIN;
    int second = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        
        else if(arr[i] > second) {
            second = arr[i];
        }
    }
    
    cout<<"Second Largest element in array: " <<second;
}
