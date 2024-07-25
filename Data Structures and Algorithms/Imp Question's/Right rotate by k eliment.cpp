#include <iostream>
using namespace std;

void rightRotateByOne(int arr[], int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rightRotate(int arr[], int n, int k) {
    k %= n;
    for (int i = 0; i < k; ++i) {
        rightRotateByOne(arr, n);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Original array is: ";
    printArray(arr, n);

    rightRotate(arr, n, k);

    cout << "Array after right rotation by " << k << " elements: ";
    printArray(arr, n);

    return 0;
}
