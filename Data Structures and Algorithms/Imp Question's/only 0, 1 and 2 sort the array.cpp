#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
        
    int count0 = 0, count1 = 0, count2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }
    
    int i = 0;
    while(count0--) arr[i++] = 0;
    while(count1--) arr[i++] = 1;
    while(count2--) arr[i++] = 2;
    
    cout<<"The sorted array is: "; 
    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
