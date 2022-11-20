// Problem Statement
// Given the head node of the singly linked list, return a pointer 
// pointing to the middle of the liked list.
// if there are an odd number of elements, return the middle element 
// if there are even elements return the one which is farther from 
// the head node 
// For example, let the linked list be 1->2->3->4->null
// since the number of elements in this liked list is 4 so 
// we have 2 middle elements, i.e. 2 and 3,
// but we return 3 as it is farther from the head node, i.e 1.


// contstraints:

// 1 <= T <= 50
// 1 <= N <4*10^4
// -10^9 <= data <= 10^9
// data not equeal to -1

// Where 'N' is the number of nodes and 'data' is the value of nodes.

// Time Limit: 1sec
// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 2
// 1 2 3 4 5 -1
// 4 0 32 5 48 6 -1
// Sample Output 1 :
// 3
// 5
// Explanation Of Sample Input 1 :
// For the first test case:

// The linked List is 1->2->3->4->5->NULL
// We can clearly see that there are 5 elements in the linked list 
// and the middle element is 3 hence we return a pointer poiniting to
// the middle element i.e 3.

// For the second test case:

// The linked List is : 4->0->32->5->48->6->NULL

// We have 6 elements in the linked list. we will have 2 middle elements
// i.e 32 and 5. Since it is specified to return the element farther 
// from the root node, we return 5.
// Sample Input 2 :
// 2
// 2 69 7 -1
// 1 4 5 8 9 6 3 -1
// Sample Output 2 :
// 69
// 8



/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/
// code bellow the line was already given in question
// -----------------------------------------------------------
#include <iostream>
using namespace std;
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
// -----------------------------------------------------------
// code above the line was already given in question


int getLength(Node* head){
    int len = 0;
    while (head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

Node* findMiddle(Node *head){
    int len = getLength(head);
    int ans = (len / 2);
    
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }
    return temp;
}