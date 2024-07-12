Algorithm for Linear Search Algorithm:
The algorithm for linear search can be broken down into the following steps:

Start: Begin at the first element of the collection of elements.
Compare: Compare the current element with the desired element.
Found: If the current element is equal to the desired element, return true or index to the current element.
Move: Otherwise, move to the next element in the collection.
Repeat: Repeat steps 2-4 until we have reached the end of collection.
Not found: If the end of the collection is reached without finding the desired element, return that the desired element is not in the array.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
