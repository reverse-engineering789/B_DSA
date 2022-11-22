// Sort linked list of 0s 1s 2s

// Easy
// Avg time to solve 10 mins
// Success Rate 90 %
// Problem Statement:
// You are given a linked list having N number of nodes and each node 
// will have an integer which can be 0, 1, or 2. You have to sort the 
// given linked list in ascending order.
// For Example:
// Let the linked list be 1 -> 0 -> 2 -> 1 -> 2.
// The sorted linked list for the given linked list will be 0 -> 1 -> 1 -> 2 -> 2.
// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 2
// 1 0 2 1 2 -1
// 0 0 1 2 -1
// Sample Output 1:
// 0 1 1 2 2 -1
// 0 0 1 2 -1
// Explanation Of Sample Input 1:
// For the 1st test case:
// The smallest element is 0, followed by 1, 1, 2 and 2. Hence the linkedlist 
// returned should be 0->1->1->2->2.

// For the 2st test case:
// The smallest element is 0, followed by 0, 1, and 2. Hence the linkedlist 
// returned should be 0->0->1->2.
// Sample Input 2:
// 2
// 2 2 1 0 0 0 -1
// 1 1 1 1 -1
// Sample Output 2:
// 0 0 0 1 2 2 -1
// 1 1 1 1 -1



/************************************************************

    Following is the linked list node structure
    
    class Node<T> {
    T data;
    Node<T> next;

    public Node(T data) {
        this.data = data;
    }
}

************************************************************/

#include <iostream>
using namespace std;

// the bellow code was given in the question
/****************************************************/
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
// the above code was given in the question
/****************************************************/

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
   Node* zeroHead = new Node(-1);
   Node* zeroTail = zeroHead;
   Node* oneHead = new Node(-1);
   Node* oneTail = oneHead;
   Node* twoHead = new Node(-1);
   Node* twoTail = twoHead;

   Node* curr = head;

   // create separate list 0s, 1s, and 2s
   while (curr != NULL){
    int value = curr -> data;

    if (value == 0){
        insertAtTail(zeroTail, curr);
    }else if(value == 1){
        insertAtTail(oneTail, curr);
    }else if(value == 2){
        insertAtTail(twoTail, curr);
    }
    curr = curr -> next;
   }
   // merge 3 sublist

   // 1s list not empty
   if (oneHead -> next != NULL){
    zeroTail -> next = oneHead -> next;
   }else{
    // 1s list -> empty
    zeroTail -> next = twoHead -> next;
   }
   oneTail -> next = twoHead -> next;
   twoTail -> next = NULL;

   // setup head
   head = zeroHead -> next;

   // delete dummy nodes
   delete zeroHead;
   delete oneHead;
   delete twoHead;

   return head;

}



