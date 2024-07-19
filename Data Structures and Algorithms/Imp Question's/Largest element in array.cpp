#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) 
        max = arr[i];
    }
    cout<<max;
}
