#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x) {
    if(x >= 0) {
        long long sr = sqrt(x);
        return sr * sr == x;
    }
    return false;
}

int main() {
    long long x;
    cout<<"Enter the value: ";
    cin>>x;
    
    if(isPerfectSquare(x)) {
        cout<<"Perfect sqaure"<<endl;
    }
    else {
        cout<<"Not Square";
    }
}
