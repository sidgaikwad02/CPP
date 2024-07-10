#include<iostream>
using namespace std;

int findIndex(int arr[], int n, int index, int key) {
   
    for(int index=0;index<n;index++) {
        if(arr[index] == key) 
            return index;
    }
    return -1;
}

int main() {
    int arr[] = {1,23,4,5,6,7,8};
    int n = 7;
    int index = 0;
    int key = 6;
    
    int ans = findIndex(arr,n,index,key);
    if(findIndex) {
        cout <<"Elemnt found at index:"<<ans<<endl;
    }
    else{
        cout<<"Elemnt is not found"<<ans<<endl;;
    }
    
}
