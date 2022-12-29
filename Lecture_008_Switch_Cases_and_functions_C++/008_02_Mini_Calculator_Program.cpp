#include <iostream>
using namespace std;


int main(){

int n1 = 2;
int n2 = 6;
char op = '+';
  float answer = 0;
 switch (op){
  
 case '+':  answer = n1 + n2;
           cout << "n1 + n2: " << answer << endl;
    break;
 case '-':  answer = n1 - n2;
           cout << "n1 - n2: " << answer << endl;
    break;
 case '*':  answer = n1 * n2;
           cout << "n1 * n2: " << answer << endl;
    break;
 case '/':  answer = n1 / n2;
           cout << "n1 / n2: " << answer << endl;
    break;

 default: cout << "Enter valid info" << endl;
    break;
 }
    return 0;

}