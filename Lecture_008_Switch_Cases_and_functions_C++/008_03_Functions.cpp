
// Finding a ^ b WITHOUT the help of functions

#include <iostream>
using namespace std;

int main(){

int num = 2;
int power = 4;
int answer = 1;
int   result = 0;
for(int i = 1; i <= power; i++){
     answer = answer * num;
}
     cout << "answer is: " << answer <<  endl;
}
