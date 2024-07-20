#include<iostream>
using namespace std;

void printDuplicates(int arr[], int n) {
    int visited[n];
    
    for(int i = 0; i <n; i++) {
        int count =1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        
        if(count != 1) {
            cout<<"Duplicate element is: " <<arr[i]<<endl;;
        }
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,22,3,3,4,5,8,66,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printDuplicates(arr, n);
    
    return 0;
}
