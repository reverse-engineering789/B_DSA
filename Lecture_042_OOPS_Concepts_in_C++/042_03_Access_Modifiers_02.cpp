
#include <iostream>
using namespace std;

class Hero {
    // Properties
    public:
    int health;
    char level;

    void print(){
        cout << level << endl;
    }
};

int main(){

   Hero ramesh;
   ramesh.health = 70;
   ramesh.level = 'A';
cout << "health is: " << ramesh.health << endl;
// since ramesh is private u cannot access it.
cout << "Level is: " << ramesh.level << endl;
 return 0;
}

// Output:
// health is: 70
// Level is: A