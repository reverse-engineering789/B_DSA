


#include <iostream>
#include <cstring>
using namespace std;

class Hero {
    // Properties
    private:
    int health;

    public:
    // code of this file:
    char *name;
    char level;         
    
    Hero(){
        cout << "Default Constructor Called: " << endl;
    // code of this file:
        name = new char[100];
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
    
     // Copy Constructor:
     Hero(Hero& temp){

        // code of this file:
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        
        cout << "Copy constructor called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;

     }
    void print(){
        // code of this file:
        cout << endl;
        cout << " [ Name: " << this -> name << " ,";
        // -----------------------------------------------
       cout << "health" << this -> health << " ,";
        cout << "level" << this -> level << " ]";
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

// code of this file:
   
   void setName(char name[]){
    strcpy(this->name, name);
    }
};

int main(){

// code of this file:
Hero hero1;

hero1.setHealth(12);
hero1.setLevel('D');
char name[7] = "Surya";
hero1.setName(name);

hero1.print();


// use default copy constructor:
Hero hero2(hero1);
hero2.print();
// Hero hero2 = hero1;

hero1.name[0] = 'A';
hero1.print();

hero2.print();


}

// Output:
//  [ Name: Surya ,health12 ,levelD ]Copy constructor called

//  [ Name: Surya ,health12 ,levelD ]
//  [ Name: Aurya ,health12 ,levelD ]
//  [ Name: Surya ,health12 ,levelD ]