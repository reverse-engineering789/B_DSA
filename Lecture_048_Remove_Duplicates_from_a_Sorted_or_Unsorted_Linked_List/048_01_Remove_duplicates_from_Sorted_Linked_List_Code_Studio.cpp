// Remove Duplicates From Sorted List


// problem statement:

// You want to play with your friend, but your friend has pending homework,
// help him complete that.
// You are given a "Head" of a sorted linked List. You can remove some values 
// from the linked list. In the end, You must return  a soted linked list that 
// contains no adjacent values that are equal.

// For Example:
// If the given linked list is: 1 -> 2 -> 2 -> 3

// Then we will delete the duplicate value '2' present in the linked list,
// and finally return the following list:

// 1 -> 2 -> 3



// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 2
// 1 2 2 3 -1
// 1 2 3 4 -1
// Sample Output 1 :
// 1 2 3 -1
// 1 2 3 4 -1
// Explanation For Sample Input 1 :
// For test case 1, we will return 1 -> 2 -> 3 -> NULL, because : 
// We will delete the duplicate value ‘2’ present in the linked list, and finally return the following list:
// 1 -> 2 -> 3


// For test case 2, we will return 1 -> 2 -> 3 -> 4 -> NULL, because the input list contains no duplicates, so we will return it as it is.
// Sample Input 2 :
// 2
// 1 -1
// 2 5 5 5 5 -1 
// Sample Output 2 :
// 1 -1
// 2 5 -1



/********************************************************

    Following is the class structure of the Node class:
    
    class Node
    {
        public:
            int data;
            Node next;
            Node(int data)
            {
                this.data = data;
                this.next = null;
            }
    };

********************************************************/

// The bellow code was already given in the question:
/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/
#include <iostream>
using namespace std;
 class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
Node * uniqueSortedList(Node * head) {
    // Write your code here.
      // empty list:
      if (head == NULL){
        return NULL;
      }
      // non-empty list:
      Node* curr = head;

      while(curr != NULL){
        if ((curr -> next != NULL) && curr -> data == curr -> next -> data){
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }else{
            curr = curr -> next;
        }
      }
      return head;
}