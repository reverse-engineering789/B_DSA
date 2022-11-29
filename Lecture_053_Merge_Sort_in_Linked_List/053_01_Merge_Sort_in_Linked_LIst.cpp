// Note:
// YOU CANNOT REPLACE THE DATA OR VALUES,  
// You have to change the links to solve this problem.


//  MergeSort Linked List
// Contributed by
// Dhruv Sharma
// Medium
// Avg time to solve 30 mins
// Success Rate 60 %


// Problem Statement:
// For a given Singly Linked List of integers, sort the list using the 
// "Merge sort" alogrithm.


// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 1 4 5 2 -1
// Sample Output 1 :
// 1 2 4 5
// Sample Input 2 :
// 10 9 8 7 6 5 4 -1
// Sample Output 2 :
// 4 5 6 7 8 9 10


// bellow code was given in the question
/********************************************************************

    Following is the representation of the Singly Linked List Node:

    
    // class Node<T> {
    //     T data;
    //     Node<T> next;
        
    //     public Node(T data) {
    //         this.data = data;
    //     }
    // }
public class Solution {
    public static Node<Integer> mergeSort(Node<Integer> head) {
        // Write your code here.
    }
}


above code was given in the question

********************************************************************/
 
#include <iostream>
using namespace std;

  class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

node* findMid(node* head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}


node* merge(node* left, node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    node* ans = new node(-1);
    node* temp = ans;

    while(left != NULL && right != NULL) {
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }else{
            temp -> next = right;
            temp = right;
            right = right -> next;   
        }
    }
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    while (right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    ans = ans-> next;
    return ans;
}

                     
node* mergeSort(node *head) {
    // Write your code here.
    if(head == NULL || head -> next == NULL){
        return head;
    }
    // break linked list into 2 halvs, after finding mid 
     node* mid = findMid(head);

     node* left = head;
     node* right = mid -> next;
     mid -> next = NULL;

     // recursive calls to sort both halves
     left = mergeSort(left);
     right = mergeSort(right);

     // merge both left and right halves
     node* result = merge(left, right);

     return result;
}