// Problem Statement
// You are give a linked list f N nodes and an integer K, You have to reverse 
// the given linked list in groups of size K i.e if the list contains x nodes
// numbered from 1 tgo x, then you need to reverse each of the groups (1, K),
// (K+1, 2*K) and so on.
// For Example, if the list is [1,2,3,4,5,6] and K = 2, then the new list will
// be [2,1,4,3,6,5].

// Note:
// 1. In case the number of elements in the list cannot be evenly divied 
// into groups of size k, then just reverse the last group (with any size). 
// For example if the list is 1 2 3 4 5 and K = 3, then the answer would
// be 3 2 1 5 4.

// 2. All the node values will be distinct.

// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 2
// 1 2 3 4 5 6 -1
// 2
// 5 4 3 7 9 2 -1
// 4 
// Sample Output 1:
// 2 1 4 3 6 5
// 7 3 4 5 2 9
// Explanation Of The Sample Input1:
// For the first test case, we reverse the nodes in groups of two, 
// so we get the modified linked list as 2 1 4 3 6 5.
// For the second test case, we reverse the nodes in groups of four. 
// But for the last 2 elements, we cannot form a group of four, so we 
// reverse those two elements only. Hence the linked list becomes 
// 7 3 4 5 2 9.
// Sample Input 2:
// 2
// 3 2 1 4 5 6 -1
// 1
// 4 3 2 8 -1
// 4 
// Sample Output 2:
// 3 2 1 4 5 6
// 4 3 2 8


/****************************************************************
    Following is the Linked List node structure

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
#include <bits/stdc++.h> 
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


// code above the line was already given in question
// -----------------------------------------------------------
Node* kReverse(Node* head, int k) {
    // Write your code here:
    // base case:
    if(head == NULL){
        return NULL;
    }

    // step 1: reverse first k nodes:
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2: Next process will be handled by Recursion:
    if(next != NULL){
        head -> next = kReverse(next, k);
    }

    // step 3: return head of reversed List:
    return prev;
}    
