#include<iostream>
using namespace std;

void printCounting(int n){
    //  base case

    if(n == 1){
        cout << 1 <<" ";
        return;
    }

    // processing

    cout << n <<" ";

    // Recursive call

    printCounting(n-1);
}

int main() {

        printCounting(10);

        return 0;
        
}