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

    // code of this file:
    // this code is the code of destruction of node, to delete the 
    // node, this for deletion in linked list.
    // destruction:
    ~Node(){
        int value = this -> data;
        // memory free
        if (this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
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
void deleteNode(int position, Node* & head){
    // deleting first or start node 
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        // memory free start node:
        delete temp;
    }else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
    
    int cnt = 1;
    while(cnt < position){
         // or 
            //  while(cnt <= position-1){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
    }
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    
    Node* temp = head;

    while(temp != NULL){
        // CYCLE IS PRESENT
    if(visited[temp] == true){
        cout << "Present on element: " << temp -> data << endl;
        return true;
    }
    visited[temp] = true;
    temp = temp -> next;
    }
   return false;
}

// created a new node:
int main(){
    Node* node1 = new Node(10);

// head pointed to node1;
Node* head = node1;
Node* tail = node1;

// print(head);
insertAtTail(tail, 12);
// insertAtTail(tail, 12);
// print(head);
insertAtTail(tail, 15);
// print(head);
insertAtPosition(tail, head, 4, 22);
// print(head);  

// cout << "head: " << head -> data << endl;
// cout << "tail: " << tail -> data << endl;

// // code of this file:
// deleteNode(4, head);
print(head);
tail -> next = head -> next;

cout << "head: " << head -> data << endl;
cout << "tail: " << tail -> data << endl;

if (detectLoop(head)){
    cout << "Cycle is present" << endl;
}else{
    cout << "cycle is not present"  << endl;
}
return 0;   

   }
// Output:
// 10 12 15 22 
// head: 10
// tail: 22
// Present on element: 12
// Cycle is present
