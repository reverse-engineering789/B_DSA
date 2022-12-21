#include <iostream>
using namespace std;

int main(){
    int number = 2;
    int answer = 0;
    for(int i = 1; i <= number; i++){
        answer = number * i;
    }
    cout << answer << endl;
}