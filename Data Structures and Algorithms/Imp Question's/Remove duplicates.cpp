#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    set<int> s;
    
    for(int i = 0; i < n; i++)
    s.insert(arr[i]);
    
    cout<<"After removing duplicates from array: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout<<*it<<" ";
    }
}
