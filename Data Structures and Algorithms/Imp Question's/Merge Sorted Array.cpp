#include <bits/stdc++.h>
using namespace std;

void mergeSorted(long long arr1[], long long arr2[], int n, int m) {
    // Declare 2 pointers:
    int left = n - 1;
    int right = 0;

    // Swap the elements until arr1[left] is
    // smaller than arr2[right]:
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        } else {
            break;
        }
    }

    // Sort arr1[] and arr2[] individually:
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;

    // Merge arrays
    mergeSorted(arr1, arr2, n, m);

    // Output the merged arrays:
    cout << "The merged sorted arrays are:\n";

    // First print arr1
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    // Then print arr2
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
