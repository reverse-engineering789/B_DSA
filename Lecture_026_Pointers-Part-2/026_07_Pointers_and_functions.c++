// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }
// int main () {

//    int value = 5;
//    int *p = &value;

//    print(p);

// return 0;
// }  

// // Output:
// // 5

// // --------------------------------------------------

// // UPDATING THE VALUE OF P 


// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }

// void update(int *p){
//     p = p + 1;
// }

// int main () {

//    int value = 5;
//    int *p = &value;

//    cout << "before updating" << p << endl;
//    print(p);
//    cout << "after updating" << p << endl;
// return 0;
// }  

// // Output:
// // before updating0x61ff08
// // 5
// // after updating0x61ff08


// // --------------------------------------------------------------------




// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }

// void update(int *p){
//     p = p + 1;
//     cout << "inside" << p << endl;  
// }

// int main () {

//    int value = 5;
//    int *p = &value;

//    cout << "before updating" << p << endl;
//    update(p);
//    cout << "after updating" << p << endl;
// return 0;
// }  

// // Output:
// // before updating0x61ff08
// // inside0x61ff0c
// // after updating0x61ff08

// // ------------------------------------------------



// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }

// void update(int *p){
//     *p = *p + 1;
// }

// int main () {

//    int value = 5;
//    int *p = &value;

//    cout << "before updating" << *p << endl;
//    update(p);
//    cout << "after updating" << *p << endl;

// return 0;
// }  

// // Output:
// // before updating5
// // after updating6


// // -----------------------------------------------------








