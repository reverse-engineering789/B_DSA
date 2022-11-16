

#include <iostream>
using namespace std;
class Hero {
    
};
int main(){
   
   // Creation of object:
   Hero h1;
   cout << "Output: " <<  sizeof(h1) <<  endl;
 return 0;
}

// Output:
// the system allocates only one byte to keep the track and identification. 
// even though its empty the output will be 1 and not 0 
// output: 1