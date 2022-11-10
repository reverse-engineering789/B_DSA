
// // HEAD RECURSION
#include<iostream>
using namespace std;

void print(int n){
    if (n == 0){
        return;
    }

    cout << n << endl;

    print(n-1);

}
int main(){
   int n;
   cout << "Enter the value of n: "<< endl;
   cin >> n;
   cout << endl;
   print(n);

 return 0;
}

// // Output:
// // Enter the value of n: 
// // 5

// // 5
// // 4
// // 3
// // 2
// // 1

// // ------------------

// TAIL RECURSION
#include<iostream>
using namespace std;

void print(int n){
    if (n == 0){
        return;
    }

    // cout << n << endl;

    print(n-1);
   cout << n << endl;
}
int main(){
   int n;
   cout << "Enter the value of n: "<< endl;
   cin >> n;
   cout << endl;
   print(n);

 return 0;
}


// Output:
// Enter the value of n: 
// 4

// 1
// 2
// 3
// 4


