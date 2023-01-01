#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Surya1";
    m[13] = "Surya2";
    m[2] = "Surya3";

    m.insert({5, "Surya4"});

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    };



    // Output:
    // 1 Surya1
    // 2 Surya3
    // 5 Surya4
    // 13 Surya2


    cout << "finding 13: " << m.count(13) << endl;
    // Output:
    // finding 13: 1

   cout << "finding 13: " << m.count(13) << endl;

   // Output:
   // finding 13: 0

    m.erase(13);
    cout << "after erase: " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl << endl;

// Output:
// after erase:
// 1 Surya1
// 2 Surya3
// 5 Surya4

    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;

// Output:
// 5
    }
}