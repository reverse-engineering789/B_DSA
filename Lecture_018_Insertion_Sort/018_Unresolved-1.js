// 018_01_Insertion_Sort.js


// getting undefined as output: 

let insertionSort = (arr) => {
    for (let i = 1; i < arr.length; i++){
        let temp = arr[i]
        let j = i - 1
        for (; j >= 0; j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j]
            }else{
                break
            }
            
        }
        arr[j+1] = temp
    }
}

let array = [2,4,5,8,6]


let test = insertionSort(array)

console.log (test)


// Output:
// undefined


// Output:
// #include<vector>
// using namespace std;

// void insertionSort(int n, vector<int> &arr){
    
//     for(int i = 1; i<n; i++) {
//         int temp = arr[i];
//         int j = i-1;
//         for(; j>=0; j--) {
            
//             if(arr[j] > temp) {
//                 //shift
//                 arr[j+1] = arr[j];
//             }
//             else { // ruk jao
//                 break;
//             }
            
//         }
//         //copy temp value
//         arr[j+1] = temp;  
//     } 
// }