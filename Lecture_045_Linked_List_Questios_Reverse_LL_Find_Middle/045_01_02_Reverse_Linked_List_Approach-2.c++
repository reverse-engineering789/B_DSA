// recursive approach:

// https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_920513?!leftPanelTab=0

// Problem Statement:
// Your are given a Singly Linked List of integers. You need to reverse
// the linked list by changing the links between nodes.


// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 3
// 1 -2 3 -1
// 9 9 -1
// 4 -1
// Sample Output 1 :
// 3 -2 1 -1
// 9 9 -1
// 4 -1
// Explanation For Sample Input 1 :
// For every test case, the reversed list is printed, terminated by -1.
// Sample Input 2 :
// 2
// 1 1 1 -1
// 3 -3 -1
// Sample Output 2 :
// 1 1 1 -1
// -3 3 -1




    // Following is the class structure of the Node class:
    //   class Node
        // {
        // public:
	    //    
        //  int data;
	    //     Node *next;
	    //     Node(int data)
	    //     {
		//         this->data = data;
		//         this->next = NULL;
	    //     }
        // };

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

    
void reverse(Node* &head, Node* curr, Node* prev){
    // base case:
    if (curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node *head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

