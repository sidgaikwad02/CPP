#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
        
    Node() {
        cout<<"I am inside default constructor"<<endl;
        this->next = NULL;
    }
    
    Node(int data) {
        cout<<"I am inside parameterized constructor"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    Node* temp = head;
    
    while(temp != NULL) {
        cout<<temp -> data <<"->";
        temp = temp-> next; 
    }
}

int findLen(Node* head) {
    Node*temp = head;
    int length = 0;
    
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next= fifth;
    
    Node* head = first;
    cout<<"Printing the entire linked list: "; 
    printLL(head);
    
    cout<<"Length of LL is :" <<findLen(head) <<endl;
}
