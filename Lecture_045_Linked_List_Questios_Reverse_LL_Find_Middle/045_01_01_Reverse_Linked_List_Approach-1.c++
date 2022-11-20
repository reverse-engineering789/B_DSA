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


Node* reverseLinkedList(Node *head){
    if (head == NULL || head -> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
  
  return prev;
    
}