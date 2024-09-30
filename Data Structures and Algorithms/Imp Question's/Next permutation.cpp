#include<iostream>
using namespace std;

void reverseSubstring(string &s, int left, int right) {
    while(left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int binarySearch(string &s, int left, int right, int key) {
    int index = -1;
    
    while(left <= right) {
        int mid = left + (right - left) /2;
        
        if(s[mid] > key) {
            if(index == -1 || s[mid] < s[index]) {
                index = mid;
            }
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
    }
    return index;
}

bool nextPermutation(string &s) {
    int n = s.length();
    
    int i = n -2;
    
    while(i >=0 && s[i] > s[i+1]) {
        i--;
    }
    
    if( i< 0) {
        return false;
    }
    
    int index = binarySearch(s, i+1, n-1,s[i]);
    
    swap(s[i], s[index]);
    
    reverseSubstring(s, i+1, n-1);
    
    return true;
}

int main() {
    string s = "abc";
    
    if(nextPermutation(s)) {
        cout<<"After permutation: "<<s<<endl;
    }
    else{
        cout<<"No possible word"<<endl;
    }
}
