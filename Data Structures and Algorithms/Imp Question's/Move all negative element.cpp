#include<bits/stdc++.h>
using namespace std;

void move(int arr[], int n) {
    int j = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            if(i != j)
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {8,6,-8,-1,-74};
    int n = 5;
    
    move(arr, n);
    for(int i = 0; i <n; i++)
    cout<<arr[i]<<" ";
}
