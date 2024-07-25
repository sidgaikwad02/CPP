#include <iostream>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int k) {
    for (int i = 0; i < k; ++i) {
        leftRotateByOne(arr, n);
    }
}

// Function to print the array
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    std::cout << "Original array: ";
    printArray(arr, n);

    leftRotate(arr, n, k);

    std::cout << "Array after left rotation by " << k << " elements: ";
    printArray(arr, n);

    return 0;
}
