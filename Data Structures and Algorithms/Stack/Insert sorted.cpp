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

int main() {
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    
    insertSorted(st, 25);
    
    while(!st.empty()) {
        cout<<st.top() <<" ";
        st.pop();
    }
}
