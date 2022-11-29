// HW
// HW
// HW

// CODING NINJAS


// Flatten A Linked List

// Problem Statement
// You are give a linked list containing N nodes, where every node in the
// linked list contains two ponters, first one is 'next' which points 
// to the next node in the list and tyhe second one is 'child' pointer
// to a linked list where the head is the node. And each of these 
// child linked lists is in sorted order. 
// Your task is to flatten this linked such that all nodes appear 
// in a single layer or level while the nodes should maintain the 
// sorted order.

// For Example:
// the output of the linked list should be:
// 1->2->3->4->5->6->7->8=>9=>12->20->null


// Note:
// The flattened list will be printed using the bottom pointer instead of the 
// next pointer.
// The value of any node in the linked list will not be equal to -1.


// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 2
// 5
// 3 4 6  -1
// 5 11 14 -1
// 22 25 -1
// 26 28 -1
// 39  -1
// 4
// 1 2 3 -1
// 8 10 15 -1
// 18 22 -1
// 29 -1
// Sample Output 1 :
// 3 4 5 6 11 14 22 25 26 28 39
// 1 2 3 4 6 8 10 15 18 22 29
// Explanation For Sample Input 1:
// For the first test case:
// The given linked list is :

// Therefore after flattening the list will become-
// 3 -> 4 ->  5 ->  6 -> 11 -> 14 -> 22 -> 25 -> 26 -> 28 -> 39->null
// Note that: the list after flattening should be sorted!

// For the second test case:

// The given linked list is 

// Therefore after flattening the list will become-
// 1 -> 2 ->  3 ->  4 -> 6 -> 8 -> 10 -> 15 -> 18 -> 22 -> 29 ->null
// Sample Input 2 :
// 3
// 5
// 4 6 -1
// 5 71 -1
// 7 8 9 -1
// 11 12 19 -1
// 14 15 17 -1
// 2
// 3 4 -1
// 5 6 7 8 -1
// 1
// 3 -1 
// Sample Output 2 :
// 4 5 6 7 8 9 11 12 14 15 17 19 71
// 3 4 5 6 7 8
// 3


// the bellow code was already given in the question:
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
// the above code was already given in the question:



#include <iostream>
using namespace std;


class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

// HW
// HW
// HW

// CODING NINJAS