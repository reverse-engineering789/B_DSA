// Need to handle the code of:
// node deletion, Tail handling, 
// in the bellow code, the tail points to the garbage value, 
// after deleting the last code in the list.



#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
  
    // constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data" << val << endl;
    }
};

// traversing a linked list:
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of the linked List
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while (temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


// Insert At Head:
void insertAtHead(Node* &tail, Node* &head, int d){
    
    // empty list:
    if (head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}


// Insert At Tail;
void insertAtTail(Node* &head, Node* &tail, int d){
   
    if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }
}


// insert at any given position:
// insert at any position:
void insertAtPosition( Node* &tail, Node* &head, int position, int d){
    // insert at start
     if(position == 1){
        insertAtHead(tail, head, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    // creating a node for d:
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev =  nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}


// code of this file:
void deleteNode(int position, Node* &head){
    // deleting first node or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        // delete any middle or last node:
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
    }
}

int main(){
    
    Node* node1 = new Node(10);
   
    // BEFORE:
    // Node* head = node1;
    // Node* tail = node1;
    // AFTER:
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);
    insertAtHead(tail, head, 13);
    print(head);
    insertAtHead(tail, head, 8);
    print(head);


    insertAtTail(head, tail, 25);
    print(head);

    
    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    insertAtPosition(tail, head, 7, 102);
    print(head);
// code of this file
    deleteNode(1, head);
    print(head);

    deleteNode(6, head);
    print(head);

    deleteNode(7, head);
    print(head);
 return 0;
}

// Output:
// 0
// 11
// 13 11
// 8 13 11
// 8 13 11 25
// 8 100 13 11 25
// 101 8 100 13 11 25
// 101 8 100 13 11 25 102
// memory free for node with data101
// 8 100 13 11 25 102
// 8 100 13 11 25