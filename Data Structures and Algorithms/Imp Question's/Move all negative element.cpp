#include<bits/stdc++.h>
using namespace std;

void shiftall(int arr[], int left, int right) {
    while(left <= right) {
        if(arr[left] < 0 && arr[right] < 0) {
            left += 1;
        }
        
        else if(arr[left] > 0 && arr[right] > 0) {
            right -= 1;
        }
        
        else if(arr[left] < 0 && arr[right] > 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left += 1;
            right -= 1;
        }
        else{
            left += 1;
            right -= 1;
        }
    }
}

void print(int arr[], int right) {
    for(int i = 0; i <= right; i++){
         cout<< arr[i] <<" ";
    }
   cout<<endl;
}


int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >>arr[i];
    
    shiftall(arr, 0, n-1);
    print(arr, n-1);
    
    return 0;
}
