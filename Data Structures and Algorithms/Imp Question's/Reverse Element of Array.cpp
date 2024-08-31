#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = n-1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
}

// method two
#include<bits/stdc++.h>
using namespace std;

int main(){

   int arr[] = {10, 20, 30, 40, 50};
   int n = sizeof(arr)/sizeof(arr[0]);

   int start = 0, end = n-1;

    while(start < end){
        swap(arr[start++], arr[end--]);
        start++;
        end--;
    }

    for(int i=0; i<n; i++)
       cout << arr[i] << " ";
}
