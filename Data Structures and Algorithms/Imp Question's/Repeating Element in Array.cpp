#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10,30,20,20,10,50,40,60,90,80,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int , int> mp;
    
    for(int i = 0; i< n; i++) mp[arr[i]]++;
    
    for(auto it = mp.begin(); it != mp.end();it++) {
        if (it->second != 1) cout<< it->first<<" ";
    }
}
