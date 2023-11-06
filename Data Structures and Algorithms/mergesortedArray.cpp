#include<iostream>
 using namespace std;

 void merge(int arr1[], int n, int2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;

    while(i<n && j<m) {
        if( arr[i] < arr[j]) {
            arr3[k++] = arr1[i++];
        }

        else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i<n) {
        arr3[k++] = arr1[i++];
    }

    while(j<m) {
        arr2[k++] = arr2[j++];
    }
 

 void print(int ans[], int n) {
    for(int i = 0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
 }

    int main() {

        int arr1[5] = {1,3,4,5,7};
        int arr2[3] = {3,2,4};

        int arr3[8] = {0};

        merge(arr1, 5, arr2, 3,arr3);

        print(arr3, 8);

        return 0;
    }
 
};
