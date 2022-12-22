

#include <iostream>
using namespace std;

void printingTheArray(int arr[], int size){

for(int i = 0; i <=size; i++){
      cout << arr[i] << " ";
}

};

int main(){
    int array[5] = {1,2,3,4,5};
    printingTheArray(array, 4);
}

// Output:
// 1 2 3 4 5 