#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s){
        cout << i << endl;
    } cout << endl;


// Ouput:
// 0
// 1
// 5
// 6

     
     // erase function:
     set<int>::iterator it = s.begin();
     it++;

     s.erase(it);

     for(auto i : s){
        cout << i << endl;
     }
     cout << endl;

// Output:
// 0
// 5
// 6

       // is present or not:
     cout << "-5 is present or not -> " << s.count(5) << endl;
     cout << "-5 is present or not -> " << s.count(-5) << endl;

// Output:
// -5 is present or not -> 1
// -5 is present or not -> 0


      // value present at iterator
    
    set<int>::iterator itr = s.find(5);
    cout << "value present at itr -> " << *it << endl;

    // Output:
    // value present at itr -> 1


    for(auto it=itr; it!=s.end(); it++){
        cout << *it << " ";
    }cout<<endl;

    // Output:
    // 5 6
}