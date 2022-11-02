// // importetnt_Concept_Pointers


// #include <iostream>
// using namespace std;

// int main () {


// // int num = 5;
// // int  a = num;
// // a++;

// // // cout << num << endl;

// // int *p = &num;

// // // cout << "before " << num << endl;
// // (*p)++;
// // // cout << "after " << num << endl;


// // int *q = p;
// // cout << p << " - " << q << endl;
// // cout << *p << " - " << *q << endl;


// int i = 3;
// int *t = &i;
// cout << *t++ << endl;
// cout << ++*t << endl;
// // OUtput:
// // 3
// // 4200992
// return 0;
// }


// // ----------------------------------------------




#include <iostream>
using namespace std;

int main () {

// important concept
int i = 3;
int *t = &i;
// cout << (*t)++ << endl;

*t = *t + 1;

cout << "before t" << t << endl;
t = t + 1;
cout << "after t" << t << endl;


return 0;
}


