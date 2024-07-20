// Time complexity: O( n^2)
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

// Time complexity: O (n )
#include<iostream>
#include<unordered_map>
using namespace std;

void repeating(int arr[], int n) {
    unordered_map<int, int> mp;
    int count_dis = 0;
    
    for(int i = 0; i < n; i++)
        mp[arr[i]]++;
    
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second != 1){
        cout<< it-> first<<" ";
        }
       
    }
    cout<<endl;
}

int main() {
    int arr[]= {10,20,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    repeating(arr, n);
}
