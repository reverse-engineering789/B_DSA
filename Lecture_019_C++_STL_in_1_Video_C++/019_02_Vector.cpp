#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> v;

    

    cout << "Capacity-> " << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;


    cout << "Element at 2nd index" << v.at(2) << endl;

    cout << "front " << v.front() << endl;
    
    cout << "back " << v.back() << endl;

    cout << "before pop " << endl;
    for(int i:v){
        cout<< i << " ";
    }cout << endl;

    v.pop_back();

    cout<< "after pop"<< endl;
    for(int i:v){
        cout << i << " ";
    }

    

    cout <<"before clear size" << v.size() << endl; 
    v.clear();
    cout<<"after clear size" << v.size() << endl;
    

    // Output:
// Capacity-> 0
// Capacity-> 1
// Capacity-> 2
// Capacity-> 4
// Size-> 3
// Element at 2nd index3
// front 1
// back 3
// before pop
// 1 2 3 
// after pop
// 1 2

//      vector<int> a(5,1);
//      cout << "print a" << endl;
//      for(int i:a){
//         cout << i << " ";
//      }
// // Output:
// // 1 1 1 1 1

     vector<int> a(5,1);
     vector<int> last(a);
     cout << "print last" << endl;
     for(int i:last){
        cout << i << " ";
     } cout << endl;

     
// Output:
// print last
// 1 1 1 1 1
} 


