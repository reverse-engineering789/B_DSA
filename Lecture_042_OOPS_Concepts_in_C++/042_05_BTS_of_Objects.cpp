
#include <iostream>
using namespace std;

class Hero {
    // Properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout << level << endl;
    }
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
  // creation of objects:

   Hero ramesh;
   cout << "Size of Ramesh is: " << sizeof(ramesh) << endl;
//    cout << "Ramesh health is: " << ramesh.getHealth() << endl;
//    ramesh.setHealth(70);
//    ramesh.level = 'A';

// cout << "health is: " << ramesh.getHealth() << endl;
// // since ramesh is private u cannot access it.
// cout << "Level is: " << ramesh.level << endl;
 return 0;
}

// Output:
// Size of Ramesh is: 8