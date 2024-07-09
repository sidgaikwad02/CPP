// Recursion

#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index) {
    // base case
    if(index >= size)  {
        return true;
    }
    
    if(arr[index] > arr[index-1]) {
        int ans = checkSorted(arr,size,index+1);
    }
        return false;
    
}


int main() {
    int arr[] = {10,20,40,50,70};
    int size = 5;
    int index = 0;
    
    bool isSorted = checkSorted(arr,size,index);
    
    if(isSorted) {
        cout<<"Array is sorted" <<endl;
    }
    else {
        cout <<"Array is not sorted"<<endl;
    }
}
