
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

vector<int> v;

v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

// Output:
// Finding 6 -> 1

cout << "lover bound -> " << lower_bound(v.begin(), v.end(), 6)- v.begin() << endl;
cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4)- v.begin() << endl;

// Output:
// lover bound -> 2
// Upper bound -> 2


int a = 3;
int b = 5;
cout << "max -> " << max(a,b);
cout << "min -> " << min(a,b);
// Output:
// max -> 5min -> 3

swap(a,b);
cout << endl << "a-> " << a << endl;
// Output:
// a-> 5

string abcd = "abcd";
reverse(abcd.begin(), abcd.end());
cout << "string->" << abcd << endl;

// Output:
// string->dcba

rotate(v.begin(), v.begin()+1, v.end());
cout << "after rotate" << endl;
for(int i:v){
    cout<<i<<" ";

// Output:
// after rotate
// 3 6 7 1

 sort(v.begin(), v.end());
//  Output
//  3 3 6 7
       }
}


// sort(v.begin(), v.end());