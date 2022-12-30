#include <iostream>
using namespace std;

bool isPrime(int number){
    for (int i = 2; i < number; i++){
        // if it will get devided then its not a prime number.
        if (number%i == 0){
            return 0;
        }
    }
    return 1;
}



int main(){
    int n;
    cin >> n;
    if (isPrime(n)){
        cout << "is a prime number" << endl;
    }else{
        cout << "is NOT a prime number" << endl;
    }
    return 0;
}