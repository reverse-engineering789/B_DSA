#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;

    // copy old list inside new list:
    list<int> n(5,100);
    cout << "Printing n" << endl;

    for(int i:n){
        cout << i << " ";
    }cout << endl;

// Output:
// Printing n
// 100 100 100 100 100


    l.push_back(1);
    l.push_front(2);
    
    for(int i:l){
        cout << i << endl;
    }
    cout<<endl; 
    l.erase(l.begin());
    cout << "after erase" << endl;

    for(int i:l){
        cout<<" ";
    }
cout << "size of list" << l.size() << endl;
}
