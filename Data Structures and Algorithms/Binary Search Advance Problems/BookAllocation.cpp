#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
        }
        
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int s = 0; 
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int n = 4;
    int m = 2;
    int arr[]= {10,20,30,40};
    cout<<"The minimum value of maximum number of pages in book allocation is: "<<allocateBooks(arr, n, m)<< endl;
}
