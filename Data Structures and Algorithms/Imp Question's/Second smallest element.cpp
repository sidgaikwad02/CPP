#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int first = INT_MAX;
    int second = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if( arr[i] < second) {
            second = arr[i];
        }
    }
    cout<<second;
}
