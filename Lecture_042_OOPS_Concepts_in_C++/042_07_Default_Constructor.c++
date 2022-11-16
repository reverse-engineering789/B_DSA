
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
cout << "hi" << endl;
 Hero ramesh;
cout << "hello" << endl;

// object creataed dynamically
// Hero *h = new Hero;
// or
Hero *h = new Hero();

 return 0;
}

// Output:
// hi
// Constructor Called:
// hello
// Constructor Called: