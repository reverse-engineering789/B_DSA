// finding a ^ b with the help of functions.



#include <iostream>
using namespace std;

int power (int a, int b){
    int ans = 1;

    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    int answer = power(a, b);

    cout << "answer is: " << answer << endl;

    return 0;
};

// Output:
// Enter a: 
// 2
// Enter b: 
// 4
// answer is: 16