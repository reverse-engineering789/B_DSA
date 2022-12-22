
// have used stl to solve this problem.
// #include <iostream>
// #include <array>
// using namespace std;

// int main(){
//     //  array<char, 6> names {'a','b','c','d','e','f'};
//        array<int,5> names{ 1, 2, 3, 4, 5 };
// cout << names.size()<< endl;
// return 0;
// }



// -------------------------------------------------


#include <iostream>
#include <array>
using namespace std;
 int main(){
char names[6] =  {'a','b','c','d','e','f'};
for(int i = 0; i < 6; i++){
    cout << names[i] << " ";
}
return 0;
}


// Output:
// a b c d e f 