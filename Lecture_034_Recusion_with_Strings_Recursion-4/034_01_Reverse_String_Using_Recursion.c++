#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){

     cout << "Call recived for" << str << endl;
    // base case:
    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive Call:
    reverse(str, i, j);
}
int main(){
 string name = "babbar";
 cout << endl;
 reverse(name, 0, name.length()-1) ;
 cout << endl;
 cout << name << endl;
 return 0;
}

// Output:

// Call recived forbabbar
// Call recived forrabbab
// Call recived forrabbab
// Call recived forrabbab

// rabbab