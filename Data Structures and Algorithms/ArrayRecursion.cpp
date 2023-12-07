#include<iostream>
using namespace std;

bool SearchArray(int arr[], int size, int index, int target){

    // base case

    if(arr[index] >= size){
        return false;
    }
    if(arr[index] == target){
        return true;
    }

    bool FinalAns  = SearchArray(arr, size, target, index+1);
    return FinalAns;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;

    cout << "Target found or not: "<< SearchArray << endl;
}
