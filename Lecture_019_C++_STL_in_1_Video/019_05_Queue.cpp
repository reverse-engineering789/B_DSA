#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Surya");
    q.push("Surya1");
    q.push("Surya2");

    cout << "Size before pop: " << q.size() << endl;

    cout << "First Element: "<< q.front() << endl;
    
    q.pop();

     cout << "First Element: "<< q.front() << endl;


     cout << "Size after pop: " << q.size() << endl;
}

// Output:
// Size before pop: 3
// First Element: Surya
// First Element: Surya1
// Size after pop: 2