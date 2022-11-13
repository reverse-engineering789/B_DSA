

// formula: a^b = b is even: a^(b/2) * a^(b/2)
//          a^b = b is odd: a * (a * a^(1/2) * a^(1/2))


#include <iostream>
using namespace std;

int power(int a, int b){
    // base case:
    if (b == 0){
        return 1;
    }
    if (b == 1){
        return a;
    }
    // RECURSIVE CALL
    int ans = power(a, b/2);

    // if b is even
    if (b % 2 == 0){
        return ans * ans;
    }else{
        // if b is odd
        return a * ans * ans;
    }
}
int main(){

int a, b;
cout << "Enter a and b: " << endl;
cin >> a >> b;

int ans = power(a,b);

cout << "Answer is: " << ans << endl;

 return 0;
}

// Output:
// Enter a and b: 
// 2
// 3
// Answer is: 8