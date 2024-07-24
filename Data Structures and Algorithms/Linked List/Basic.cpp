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

void insertAtHead(Node * &head,Node*&tail, int data) {
    if(head == NULL) {
        // empty LL
        
        // step1: create new node
        Node* newNode = new Node(data);
        // step2: update head
        head = newNode;
    }
    else{
        // Non-empty linked list
        
        // create a new node
    Node* newNode = new Node(data);
    // attach newnode to head node
    newNode->next = head;
    // update head
    head = newNode;
    }
    
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    // empty LL
    if(head == NULL) {
        Node* newNode = new Node(data);
        
        tail = newNode;
        head = newNode;
    }else{
        // Non-empty linked list
        
        Node* newNode = new Node(data);
        
        tail -> next = newNode;
        
        tail = newNode;
    }
    
    
    
    
}

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
    Node* tail = fifth;
    cout<<"Printing the entire linked list: ";
    // insertAtHead(head,tail, 500);
    insertAtTail(head,tail, 500);
    printLL(head);
    
    // cout<<"Length of LL is :" <<findLen(head) <<endl;
    
    
    
   
}
