// Merge Two Sorted Linked Lists

// Problem Statement
// You are given two sorted linked lists.You have to merge them to produce 
// a combined sorted linked list. You need to retur the head of the final 
// linked list.

// The given linked lists may or may not be null.

// For Example:
// If the first list is: 1 -> 4 -> 5 -> NULL 
// and the second list is: 2 ->  3 -> 5 -> NULL

// the final list would be: 1 -> 2 -> 3 -> 4 -> 5 -> 5-> NULL


// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 2
// 1 4 5 -1
// 2 3 5 -1
// 7 8 -1
// 1 3 4 6 -1
// Sample Output 1:
// 1 2 3 4 5 5 -1
// 1 3 4 6 7 8 -1
// Explanation Of Input 1:
// The first test case is already explained in the problem statement.

// The second test case, the first list is: 7 -> 8 -> NULL
// The second list is: 1 -> 3 -> 4 -> 6 -> NULL
// The final list would be: 1 -> 3 -> 4 -> 6 -> 7 -> 8 -> NULL
// Sample Input 2:
// 2
// 5 -1
// 1 3 6 10 -1
// 1 1 1 -1
// 1 1 1 -1
// Sample Output 2
// 1 3 5 6 10 -1
// 1 1 1 1 1 1 -1



// GIVEN CODE:
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
// -------------------------------------------------
// the bellow code was already given in the question
template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
// the above code was already given in the question
// -------------------------------------------------


// if only one element is present in first list
Node<int>* solve(Node<int>* first, Node<int>* second){
if(first -> next == NULL){
        first -> next = second;
        return first;
    }

Node<int>* curr1 = first;
Node<int>* next1 = curr1 -> next;
Node<int>* curr2 = second;
Node<int>* next2 = curr2 -> next;

while(next1 != NULL && curr2 != NULL){
    if ((curr2 -> data >= curr1 -> data)
    && (curr2 -> data <= next1 -> data)){
        // add node in between the first list
        curr1 -> next = curr2;
        next2 = curr2 -> next;
        curr2 -> next = next1;
        // update pointers:
        curr1 = curr2;
        curr2 = next2;
    }else{
        // we have to increment curr1 and next1
        curr1 = next1;
        next1 = next1 -> next;

        if (next1 == NULL){
            curr1 -> next = curr2;
            return first;
        }
    }
}
return first;
}
    

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if (first == NULL){
        return second;
    }
    if (second == NULL){
            return first;
    }
    if (first -> data <= second -> data){
        return solve (first, second);
       }else{
        return solve(second, first);
    }
    
}



