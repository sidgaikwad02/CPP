// T.C: O(n^2)

#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st, int element) {
    // base case
    if(st.empty() || element > st.top()) {
        st.push(element);
        return;
    }
    
    // 1 case hum solve krenge
    int temp = st.top();
    st.pop();
    
    
    // recursion
    insertSorted(st, element);
    
    // backtrack
    st.push(temp);
}

void SortStack(stack<int> &st) {
    // base case
    if(st.empty()) {
        return;
    }
    
    // 1 case hum solve krenge
    int temp = st.top();
    st.pop();
    
    // recursion
    SortStack(st);
    
    // backtrack
    insertSorted(st, temp);
}

int main() {
    stack<int> st;
    
    st.push(10);
    st.push(7);
    st.push(4);
    st.push(3);
    st.push(11);
    st.push(2);
    
    SortStack(st);
    
    while(!st.empty()) {
        cout<<st.top() <<" ";
        st.pop();
    }
}
