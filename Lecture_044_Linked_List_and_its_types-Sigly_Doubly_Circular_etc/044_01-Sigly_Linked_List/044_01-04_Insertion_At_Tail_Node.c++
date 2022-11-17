
#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // construction
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// code to insert at head:
void insertAtHead (Node* &head, int d){
    // new node create:
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


// code of this file:
// code to insert at head:

void insertAtTail(Node* &tail, int d){
    // new node create:
    Node* temp = new Node(d);
    tail -> next = temp;
// tail = tail -> next;
             // or
    tail = temp;
}

// printing the node:
void print(Node* &head){

    if (head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// created a new node:
int main(){
    Node* node1 = new Node(10);

// head pointed to node1;
Node* head = node1;
// code of this file:
Node* tail = node1;
// print(head);
// insertAtHead(head, 12);
// print(head);
// insertAtHead(head, 15);
// print(head);

// code of this file:
print(head);
insertAtTail(tail, 12);
print(head);
insertAtTail(tail, 15);
print(head);
   return 0;
}

// Output:
// 10 
// 10 12
// 10 12 15