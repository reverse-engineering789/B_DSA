// Note: in recursion u must write the basecase and return value
// both are must requird.


// fectorial using recursion:
// formula: fectorial(n) = n * fectorial(n-1);


#include<iostream>
using namespace std;

int fectorial(int n){

    if (n == 0){
        return 1;
              }
    int smallerProblem = fectorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;


}
int main(){

   int n;
   cout << "Enter the value of fectorial " << endl;
   cin >> n;
   int ans = fectorial(n);
   cout << ans << endl;

    return 0;

}


// Output:
// Enter the value of fectorial 
// 5
// 120
//  }

//  //  CODE IN SORT FORM:

#include<iostream>
using namespace std;

int fectorial(int n){

    if (n == 0){
        return 1;
              }
    
    

    return n * fectorial(n-1);


}
int main(){

   int n;
   cout << "Enter the value of fectorial " << endl;
   cin >> n;
   int ans = fectorial(n);
   cout << ans << endl;

    return 0;
    
}

// // Output:
// // Enter the value of fectorial 
// // 5
// // 120

