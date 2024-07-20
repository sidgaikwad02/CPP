#include<iostream>
#include<climits>
using namespace std;

int secondSmallest(int arr[], int n) {
    int first = INT_MAX;
    int second = INT_MAX;
    
    for(int i = 0; i< n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if( arr[i] < second && arr[i] != first)
         second = arr[i];
    }
    return second;
}

int secondLargest(int arr[], int n) {
    int first = INT_MIN;
    int second = INT_MIN;
    
    for(int i = 0; i< n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if( arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    return second;
}


int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    int mini = secondSmallest(arr, n);
    int maxi = secondLargest(arr, n);
    
    cout<<"Second smallest element is: " << mini <<endl;
    cout<<"Second laegest element is: " <<maxi <<endl;
}
