// Check if Linked List is Palindrome

// Given a singly linked list of size N of integers. The task
//  is to check if the given linked list is palindrome or not.

// Example 1:

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.
// Example 2:

// Input:
// N = 4
// value[] = {1,2,3,4}
// Output: 0
// Explanation: The given linked list
// is 1 2 3 4 , which is not a palindrome
// and Hence, the output is 0.
// Your Task:
// The task is to complete the function isPalindrome() which 
// takes head as reference as the only parameter and returns true 
// or false if linked list is palindrome or not respectively.

// Expected Time Complexity: O(N)
// Expected Auxialliary Space Usage: O(1)  (ie, you should not 
// use the recursive stack space as well)

// Constraints:
// 1 <= N <= 105


//{ Driver Code Starts
// #include <stdio.h>
// #include <stdlib.h>
// #include <iostream>
// #include <stack>
// using namespace std;
// /* Link list Node */
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };




// // } Driver Code Ends
// /*
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// */

// class Solution{
//   public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//     }
// };



// //{ Driver Code Starts.
// /* Driver program to test above function*/
// int main()
// {
//   int T,i,n,l,firstdata;
//     cin>>T;
//     while(T--)
//     {
        
//         struct Node *head = NULL,  *tail = NULL;
//         cin>>n;
//         // taking first data of LL
//         cin>>firstdata;
//         head = new Node(firstdata);
//         tail = head;
//         // taking remaining data of LL
//         for(i=1;i<n;i++)
//         {
//             cin>>l;
//             tail->next = new Node(l);
//             tail = tail->next;
//         }
//     Solution obj;
//    	cout<<obj.isPalindrome(head)<<endl;
//     }
//     return 0;
// }


// // } Driver Code Ends


// the bellow code was given in the question:
// -----------------------------------------------
//{ Driver Code Starts





// #include <stdio.h>
// #include <stdlib.h>
// #include <iostream>
// #include <stack>
// using namespace std;
// /* Link list Node */
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };

// // } Driver Code Ends
// /*
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// */

// class Solution{
//   public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//     }
// };



//{ Driver Code Starts.
/* Driver program to test above function*/
// int main()
// {
//   int T,i,n,l,firstdata;
//     cin>>T;
//     while(T--)
//     {
        
//         struct Node *head = NULL,  *tail = NULL;
//         cin>>n;
//         // taking first data of LL
//         cin>>firstdata;
//         head = new Node(firstdata);
//         tail = head;
//         // taking remaining data of LL
//         for(i=1;i<n;i++)
//         {
//             cin>>l;
//             tail->next = new Node(l);
//             tail = tail->next;
//         }
//     Solution obj;
//    	cout<<obj.isPalindrome(head)<<endl;
//     }
//     return 0;
// }


#include <vector> 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
 struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



// } Driver Code Ends


// the above code was given in the question:
// -----------------------------------------------


using namespace std;



class Solution{
    private:
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = n - 1;

        while(s <= e){
            if(arr[s] != arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
   public:
   bool isPalindrome(Node *head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
   }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         