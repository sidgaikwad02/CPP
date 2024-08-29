#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
        
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    
    void insertAtHead(Node* &head, Node* &tail, int data) {
        if(head == NULL) {
            // Empty Linked List
            
            // Create new node
            Node* newNode = new Node(data);
            
            // Update head and tail to point to the new node
            head = newNode;
            tail = newNode;
        }
        else {
            // Non-empty Linked List
            
            // Create new node
            Node* newNode = new Node(data);
            
            // Attach new node to head
            newNode->next = head;
            
            // Update head
            head = newNode;
        }
    }
    
    void printLL(Node* head) {
        Node* temp = head;
        
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;  // To indicate the end of the list
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
    
    cout << "Printing the entire linked list before insertion: ";
    first->printLL(head);
    
    // Insert at head
    first->insertAtHead(head, tail, 500);
    
    cout << "Printing the entire linked list after insertion at head: ";
    first->printLL(head);
    
    return 0;
}
