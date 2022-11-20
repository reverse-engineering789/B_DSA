
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor:
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};


void insertNode(Node* &tail, int element, int d){
    // assuming that the element is present in the list
    if (tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
}else{
   // non-empty list
   // assuming that the element is present in the list

   Node* curr = tail;
   while(curr -> data != element) {
    curr = curr -> next;
   }

   // element foud -> curr is representing the node - element
   Node* temp = new Node(d);
   temp -> next = curr -> next;
   curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
        cout << endl;
}
int main(){
    Node* tail = NULL;
    // inserting in the empty list:
    insertNode(tail, 5, 3);
    print(tail);
    
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);


    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

 return 0;
}

// Output:
// 3 
// 3 5
// 3 5 7
// 3 5 7 9
// 3 5 6 7 9
// 3 5 6 7 9 10
// 3 4 5 6 7 9 10