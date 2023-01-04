#include <iostream>
using namespace std;

// code of this file
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


// code of this file:
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        // code of this file
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            // if(a[s] != a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}





int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout << "Enter your name:" << endl;
    cin >> name;
    int len = getLength(name);
    
    cout << "palindrome or not: " << checkPalindrome(name, len) << endl;
    return 0;
}

// Output:
// Enter your name:
// Noon
// palindrome or not: 1