#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
 
    // d.pop_front();
    cout<<endl;
    
    cout<<"Print first index element->" << d.at(1) << endl;
    
    }

//  Output:
//  Print first index element->1