
#include <iostream>
using namespace std;

class Hero {
    // Properties
    private:
    int health;

    public:
    char level;
    
    Hero(){
        cout << "Constructor Called: " << endl;
    }

    // Paramerterised Constructor
    Hero(int health){
        cout << "this -> : " << this << endl;
        this -> health = health;
    }

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
  
// object created statically
Hero ramesh(10);
cout << "Adress of ramesh "  << &ramesh << endl;
ramesh.getHealth();
// object created dynamically
Hero *h = new Hero();
 return 0;
}

// Output:
// this -> : 0x61fef4
// Adress of ramesh 0x61fef4
// Constructor Called: