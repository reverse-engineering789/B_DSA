#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
 
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

// Output:
// 2
// 1

// after erase
//  size of list1