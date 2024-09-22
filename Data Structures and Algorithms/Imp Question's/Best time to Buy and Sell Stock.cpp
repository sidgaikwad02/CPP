#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int maxProfit(int prices[], int n) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]);
    
    int profit = maxProfit(prices,n);
    cout<<"Maximum profit found is: "<<profit<<endl;
}

// T.C - O(n)
