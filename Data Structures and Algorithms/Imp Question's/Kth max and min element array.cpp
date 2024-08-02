#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i = 0; i < n; i++) 
        cin>>arr[i];
        
    int k;
    cout<<"Enter a k element: ";
    cin>>k;
    
    set<int> s(arr.begin(), arr.end());
    
    if(k > s.size()) {
        cout<<"k is larger than the number of unique element"<<endl;
        return 1;
    }
    
    auto itr = s.begin();
    advance(itr, k-1);
    cout<<"Minimum: " << *itr <<endl;
    
    itr = s.begin();
    advance(itr, s.size()-k);
    cout<<"MAximum: "<< *itr <<endl;
}
