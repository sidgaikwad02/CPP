#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
    this-> data = data;
    this->next = NULL;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    // Empty
    if(head == NULL) {
        Node* newNode = new Node(data);
    
        head = newNode;
        tail = newNode;   
    }

else{
    // Non-empty 
    Node* newNode = new Node(data);
    
    newNode->next = head;
    
    head = newNode;
}

}

void insertAtTail(Node* &head, Node* & tail, int data) {
    // Empty
    
    if(head == NULL) {
        Node* newNode = new Node(data);
        
        head = newNode;
        tail = newNode;
    }
    else {
        // non-empty
        
        Node* newNode = new Node(data);
        
        tail->next = newNode;
        
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    int len = findLength(head);
    
    if(position == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    else if(position > len) {
        insertAtTail(head, tail ,data);
        return;
    }
    else{
        // create new node
        
        Node* newNode = new Node(data);
        
        // traverse
        Node* prev = NULL;
        Node* curr = head;
        
        while(position != 1) {
            position--;
            prev = curr;
            curr = curr->next;
        }
        
        // step:3
        newNode -> next = curr;
        
        // step:4
        
        prev->next = newNode;
    }
}

void printLL(Node* head) {
    Node* temp = head;
    
    while(temp != NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int findLength(Node* head) {
    int len = 0;
    Node* temp = head;
    
    while(temp != NULL) {
        temp= temp->next;
        len++;
    }
    return len;
}
};



int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    Node* head = first;
    Node* tail = fifth;
    
    cout<<"Printing the entire linkedlist before insertion: ";
    first->printLL(head);
    
    // first->insertAtHead(head, tail, 0);
    // first->insertAtTail(head, tail, 60);
    first->insertAtPosition(head, tail, 49, 5);
    
    cout<<"Printing the entire linkedlist after insertion: "<<endl;
    first->printLL(head);
}
