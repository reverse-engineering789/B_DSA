
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


// code of this file:
// insertion at the middle:
// inserting in the middle:
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
      // insert at start:
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    // inserting at last position:
    if (temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d:
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


// code of this file:
// created a new node:
int main(){
    Node* node1 = new Node(10);

// head pointed to node1;
Node* head = node1;

Node* tail = node1;

print(head);
insertAtTail(tail, 12);
print(head);
insertAtTail(tail, 15);
print(head);
insertAtPosition(tail, head, 4, 22);
print(head);  

cout << "head: " << head -> data << endl;
cout << "tail: " << tail -> data << endl;
return 0;   

   }

// Output:
// 10 
// 10 12
// 10 12 15
// 10 12 15 22
// head: 10
// tail: 22