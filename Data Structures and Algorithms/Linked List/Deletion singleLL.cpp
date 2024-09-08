#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
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
        
        Node* temp  = head;
        while(temp != NULL) {
            temp = temp->next;
            len++;
        }
        return len;
    }
    
   void Deletion(Node* &head, Node* &tail, int position) {
       
       if(head == NULL) {
           cout<<"Cannote delete cause LL is empty: "<<endl;
           return;
       }
       int len = findLength(head);
       
       if(position == 1) {
        //   temp pointer create krdo
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
       }
       else if(position == len) {
           Node* prev = head;
           
           while(prev -> next != tail) {
               prev = prev->next;
           }
           prev->next = NULL;
           delete tail;  //delete node
          tail = prev; //update tail
       }
       else{
           Node* prev = NULL;
           Node* curr = head;
           
           while(position != 1) {
               position--;
               prev = curr;
               curr = curr->next;
           }
           
           prev->next = curr->next;
           curr->next = NULL;
           delete curr;
       }
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
    
    cout<<"Printing before deletion: "<<endl;
    first->printLL(head);
    first-> Deletion(head, tail, 3);
    
    cout<<"Printing after deletion: "<<endl;
    first->printLL(head);
    
}
