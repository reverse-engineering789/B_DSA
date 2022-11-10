#include<iostream>
using namespace std;

int power(int n){
    // base case:
    if (n == 0){
        return 1;
        }
    // recursive relation:
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
    
}
int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n ;

    int ans = power(n);
    cout << "answer: " << ans << endl;

    return 0;

}
// // Output:
// // Enter n: 
// // 2
// // answer: 4

// //  CODE IN SORT FORM:


#include<iostream>
using namespace std;

int power(int n){
    // base case:
    if (n == 0){
        return 1;
        }
    // recursive relation:
    return 2 * power(n-1);;
    
}
int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n ;

    int ans = power(n);
    cout << "answer: " << ans << endl;

    return 0;

}


// // Output:
// // Enter n: 
// // 2
// // answer: 4
