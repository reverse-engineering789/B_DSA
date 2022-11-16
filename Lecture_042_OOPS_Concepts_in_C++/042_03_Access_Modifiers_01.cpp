
#include <iostream>
using namespace std;

class Hero {
    // Properties
    public:
    int health;

    private:
    char level;

    void print(){
        cout << level << endl;
    }
};

int main(){
   Hero ramesh;

cout << "health is: " << ramesh.health << endl;
// since ramesh is private u cannot access it.
cout << "Level is: " << ramesh.level << end;
 return 0;
}

// Output:



// Incase of empty classes the object will get exactly 1 byte 
// in case of "empty" the system needs to keep the track, so it will give 1 byte.