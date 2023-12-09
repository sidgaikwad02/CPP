#include<iostream>
using namespace std;

bool searchArray(int arr[], int size, int index, int target){

    // base case

    if(arr[index] >= size){
        return false;
    }

    if(arr[index] == target){
        return true;
    }

    // recursive call

    bool finalAns = searchArray(arr, size, target, index+1);
    return finalAns;


}

int main() {

    int arr[] = {10,20,30,40,50};

    int size = 5;
    int index = 0;
    int target = 50;

    cout <<"Target is found:" <<searchArray<<endl;
}




