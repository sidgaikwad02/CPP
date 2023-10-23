#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){

    // base case

    if(index >= size){
        return true;
    }

    if(arr[index] > arr[index-1]){
        // aage ka ans check krna padega ab
        // recursive call
        bool aageKaAns = checkSorted(arr,size, index+1);
    }
    else{
        return false;
    }
}

int Binarysearch(int arr[], int s, int e, int target){

    if(s > e){
        return -1;
    }

    // processsing khud solve kro

    int mid = s + (e-s)/2;

    if(arr[mid] == target){
        return mid;
    }

    // Baki recursion sambhal legaaa!

    if(arr[mid] < target){
        // right me jao 
        
        return Binarysearch(arr,mid+1,e,target);
    }
    else{
        // left me jao
        return Binarysearch(arr,s,mid-1,target);
    }
}

int main() {

    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int target = 10;
    int start = 0;
    int end = size - 1;

    int foundIndex = Binarysearch(arr, target, start,end);

    if(foundIndex != -1) {
        cout <<"Target found at: "<<foundIndex<<endl;
    }
    else{
        cout<<"Target not found: "<<endl;
    }


    int arr[] = {10,20,30,50,60,70};
    int size= 6;
    int index = 1;

    bool isSorted = checkSorted(arr,size,index);

    if(isSorted){
        cout <<" Array is Sorted: "<<endl;
    }
    else{
        cout<<"array is not sorted: "<<endl;
    }
}