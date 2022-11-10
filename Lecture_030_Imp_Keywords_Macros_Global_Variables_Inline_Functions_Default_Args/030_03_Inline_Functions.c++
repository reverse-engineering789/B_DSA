// #include<iostream>
// using namespace std;

// void func(int a, int b){
//     a++;
//     b++;
//     cout << a << " " << b << endl;
// }

// int main(){
//     int a = 1, b = 2;
//     func(a,b);
    
//     return 0;
//     }

// // Output:
// // 2 3

// // ----------------------------------------------



// in the above program there is a problem of creating extra meomory:
// to reduce that we can use inline functions,
// IF U MADE A FUNCTION INLINE, WHERE EVER THAT FUNCTION IS BEING CALLED,
// THAT FUNCTION WILL BE REPLACED BY THE BODY OF ITS(INLINE FUNCTION'S) 
// BODY





#include<iostream>
using namespace std;

inline int getMax(int &a, int &b){
    return (a > b) ? a : b;
}


int main(){
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;
    
    a = a + 3;
    b = b + 1;
  
    ans = getMax(a, b);
    cout << "the maximum number is: " << ans << endl;
    return 0;
    }


// Output:
// 2
// the maximum number is: 4