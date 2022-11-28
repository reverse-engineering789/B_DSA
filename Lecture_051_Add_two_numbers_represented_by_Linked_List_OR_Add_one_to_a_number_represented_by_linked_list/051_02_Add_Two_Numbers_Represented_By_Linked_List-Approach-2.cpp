// this question can be asked in two ways:
// 1. Add two numbers represented by linked list
// OR
// 2. Add 1 to a number represeneted by linked list

// approach for both the questions is almost same

// here the solution is for
// 1. Add two numbers represented by linked list
// QUESTION
// Add two numbers represented by linked lists
// Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

// For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

// Example 1:

// Input:
// N = 2
// valueN[] = {4,5}
// M = 3
// valueM[] = {3,4,5}
// Output: 3 9 0
// Explanation: For the given two linked
// list (4 5) and (3 4 5), after adding
// the two linked list resultant linked
// list will be (3 9 0).
// Example 2:

// Input:
// N = 2
// valueN[] = {6,3}
// M = 1
// valueM[] = {7}
// Output: 7 0
// Explanation: For the given two linked
// list (6 3) and (7), after adding the
// two linked list resultant linked list
// will be (7 0).
// Your Task:
// The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

// Constraints:
// 1 <= N, M <= 5000

//{ Driver Code Starts
// driver

// #include <bits/stdc++.h>
// using namespace std;

// /* Linked list Node */
// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// struct Node* buildList(int size)
// {
//     int val;
//     cin>> val;

//     Node* head = new Node(val);
//     Node* tail = head;

//     for(int i=0; i<size-1; i++)
//     {
//         cin>> val;
//         tail->next = new Node(val);
//         tail = tail->next;
//     }

//     return head;
// }

// void printList(Node* n)
// {
//     while(n)
//     {
//         cout<< n->data << " ";
//         n = n->next;
//     }
//     cout<< endl;
// }

// // } Driver Code Ends
// /* node for linked list:

// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */

// class Solution
// {
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, m;

//         cin>>n;
//         Node* first = buildList(n);

//         cin>>m;
//         Node* second = buildList(m);
//         Solution ob;
//         Node* res = ob.addTwoLists(first,second);
//         printList(res);
//     }
//     return 0;
// }

// // } Driver Code Ends

// the bellow code was given in the question:
// -----------------------------------------------

#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// class Solution
// {
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
//     }
// };

// the ABOVE code was given in the question:
// -----------------------------------------------

class Solution
{
private:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node *&head, struct Node *&tail, int val)
    {
        /* data */
        Node *temp = new Node(val);
        // if the list is empty:
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    };
    struct Node *add(struct Node *first, struct Node *second)
    {
        /* data */
        int carry = 0;

        Node *ansHead = NULL;
        Node *ansTail = NULL;
        

        // all 3 while loops of approach 1 in single 
        // while loop
        while (first != NULL || second != NULL || carry != 0)
        {
            int val1 = 0;
            if (first != NULL)
            {
                val1 = first->data;
            }

            int val2 = 0;
            if (second != NULL)
            {
                val2 = second->data;
            }

            int sum = carry + val1 + val2;

            int digit = sum % 10;

            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            if (first != NULL)
            {
                first = first->next;
            }
            if (second != NULL)
            {
                second = second->next;
            }
            return ansHead;
        }
    }

public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        // step 1 - reverse input LL
        first = reverse(first);
        second = reverse(second);

        // step 2 - add 2 LL
        Node *ans = add(first, second);

        // step 3
        ans = reverse(ans);

        return ans;
    }
};
