
// #include<iostream>
// using namespace std;

// void a(int &i){
//     char ch = 'a';
//   cout << i << endl;
// //   b(i)
// }

// void b(int &i){
//     cout << i << endl;
// }

// int main(){
//      int i = 5;
//      // a(i)
     
//      {
//         int i = 2;
//         cout << i << endl;
//      }
//          cout << i << endl;
//         return 0;

//  }

// // Output:
// // 2
// // 5


// // ---------------------------------------

// // global variable.
// #include<iostream>
// using namespace std;

// int score = 15;

// void a(int &i){
//    cout << score << "in a" << endl;

//    char ch = 'a';
//    cout << i << endl;
// }

// void b(int &i){
//     cout << score << "in b " << endl;
//     cout << i << endl;
// }

// int main(){
//      cout << score << "in main" << endl;
//      int i = 5;
//       a(i);
//       b(i);

//     return 0;
//  }
// // -----------------------------------------------
// // we should not use global variable beacuse anyone can change or 
// // update the value.

// // Example:


#include<iostream>
using namespace std;

int score = 15;

void a(int &i){
   cout << score << "in a" << endl;
   score++;

   char ch = 'a';
   cout << i << endl;
}

void b(int &i){
    cout << score << "in b " << endl;
    cout << i << endl;
}

int main(){
     cout << score << "in main" << endl;
     int i = 5;
      a(i);
      b(i);

    return 0;
 }

//  Output:
//  15in main
// 15in a
// 5
// 16in b
// 5