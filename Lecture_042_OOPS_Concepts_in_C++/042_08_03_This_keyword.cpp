#include <iostream>
using namespace std;

class Hero {
    // Properties
    private:
    int health;

    public:
    char level;         
    
    // removing the bellow default:
    // Hero(){
    //     cout << "Constructor Called: " << endl;
    // }

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
Hero tt;
// object created statically
Hero ramesh(10);
// cout << "Adress of ramesh "  << &ramesh << endl;
ramesh.print();

//  dynamically
Hero *h = new Hero(11);
h -> print();

Hero temp(22, 'B');
temp.print();

 return 0;
}

// Output:
// tempCodeRunnerFile.cpp:1:1: error: 'tt' does not name a type
//  tt
//  ^~