**Bubble Sort Algorithm**
In Bubble Sort algorithm, 

traverse from left and compare adjacent elements and the higher one is placed at right side. 
In this way, the largest element is moved to the rightmost end at first. 
This process is then continued to find the second largest and place it and so on until the data is sorted.

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i,j;
    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
        cout << endl;
    }
}

int main() {
    int arr[] = {5,1,4,2,8};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N);
    
    cout<<"Sorted Array are : \n";
    
    printArray(arr, N);
    
    return 0;
}
