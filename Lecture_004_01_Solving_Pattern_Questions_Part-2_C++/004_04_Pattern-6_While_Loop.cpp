#include <iostream>
using namespace std;

int main(){
    int n = 4;
    // int length = 16;
  for(int i = 1; i <= n; i++){
    for(int j = n; j > i; j--){
        cout << " ";
    }
    for(int k = 0; k < 2 * i - 1; k++){
        cout << "*";
    }
    cout << endl;
  }
}
// let n = 5;
// let string = "";
// // Upside pyramid
// for (let i = 1; i <= n; i++) {
//   // printing spaces
//   for (let j = n; j > i; j--) {
//     string += " ";
//   }
//   // printing star
//   for (let k = 0; k < i * 2 - 1; k++) {
//     string += "*";
//   }
//   string += "\n";
// }