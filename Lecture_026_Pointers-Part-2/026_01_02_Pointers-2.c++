
#include <iostream>
using namespace std;

int main () {

 int arr[10] = {2,5,6};

cout << "4th" << *arr << endl;
cout << "5th" << *arr + 1 << endl;
cout << "6th" << *(arr + 1) << endl;
cout << "7th" << *(arr)+1 << endl;

// Output:
// 4th2
// 5th3
// 6th5
// 7th3
return 0;
}  

// // --------------------------------------




#include <iostream>
using namespace std;

int main () {

 int arr[10] = {23,122,41,67};

cout << "4th " << *arr << endl;
cout << "5th " << *arr + 1 << endl;
cout << "6th " << *(arr + 1) << endl;
cout << "7th " << *(arr)+1 << endl;
cout << "8th " << arr[2] << endl;
cout << "9th " << *(arr+2) << endl;

// Output:
// 4th 23
// 5th 24
// 6th 122
// 7th 24
// 8th 41
// 9th 41
return 0;
}  
