
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


// Insert at head:
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 8);
    print(head);
 return 0;
}

// Output:
// 10
// 1
// 11 10
// 13 11 10
// 8 13 11 10