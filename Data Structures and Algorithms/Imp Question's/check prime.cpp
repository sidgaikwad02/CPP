#include<iostream>
using namespace std;

bool isPrime(int n) {
    int count = 0;
    
    if(n < 2) 
        return false;
    
    for(int i = 2;i < n; i++) {
            if(n % i == 0) 
                return false;
        }
    
    return true;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    
    if(isPrime(n)) {
        cout<<"Prime number";
    }
    else {
        cout<<"Not Prime number";
    }
}
//Time Complexity: O(N)
//Space Complexity O(1)
