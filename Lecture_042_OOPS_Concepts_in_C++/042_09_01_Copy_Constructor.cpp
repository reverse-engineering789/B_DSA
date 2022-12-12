#include <iostream>
using namespace std;

class Hero {
    // Properties
    private:
    int health;

    public:
    char level;         
    
    Hero(){
        cout << "Default Constructor Called: " << endl;
    }

    // Paramerterised Constructor
    Hero(int health){
        cout << "this -> : " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }
    void print(){
       // code of this file:
       cout << "health" << this -> health << endl;
        cout << "level" << this -> level << endl;
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
// code of this file
  Hero S (70, 'C');
  S.print();
   
  // Copy Constructor
  Hero R(S);
  R.print();

}

// Output:
// health70
// levelC
// health70
// levelC