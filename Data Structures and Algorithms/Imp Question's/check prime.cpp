#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    
    bool isPrime = true;
    
    if(n < 2) {
        isPrime = false;
    }
    else{
       for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            isPrime = false;
        }
    } 
    
}

if(isPrime) {
    cout<<"The number is Prime";
}
else {
    cout<<"Number is not Prime";
}
    
}
//Time Complexity: O(N)
//Space Complexity O(1)
