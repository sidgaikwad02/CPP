#include<iostream>
using namespace std;

int getPaintWays(int n, int k){

    // base case

    if(n == 1){
        return k;

    }

    if(n == 2){
        return k+ k*(k-1);
    }

    // Recursive call

    int ans =(k-1)*(getPaintWays(n-1,k)+ getPaintWays(n-2,k));
    return ans;
}

int main() {

    int n = 4;
    int k = 3;

    int ans = getPaintWays(n,k);

    cout <<ans<<endl;
    return 0;
}
