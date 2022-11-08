// drawbacks of return by reference


#include <iostream>
using namespace std;

int *fun(int n){
    int *ptr = &n;
    return ptr;
}

// int& func(int a) {
//     int num = a;
//     int& ans = num;
//     return ans;
// }


int main(){
    int n = 5;

    // func(n);
        fun(n);

    return 0;
}