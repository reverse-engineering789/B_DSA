
// 010_05_01_Pair_Sum.js

let pairSum = (arr, s) => {
    let ans = []

    for (let i = 0; i < arr.length; i++){
        for (let j = i+1; j < arr.length; j++){
            if (arr[i] + arr[j] == s){

                let temp = []
                temp.push(min(arr[i], arr[j]))
                temp.push(max(arr[i], arr[j]))
                    ans.push(temp)

            }
        }
    }
    arr.sort()
   return ans
}
let s = 6
let arr = [1,2,4,5,6,3]


console.log(pairSum(arr))


// #include<vector>
// using namespace std;
// vector<vector<int> > pairSum(vector<int> &arr, int s){
//    vector< vector<int> > ans;
   
//    for(int i=0;i<arr.size(); i++ )
//    {
//    		for(int j = i+1; j<arr.size(); j++) {
//         	if(arr[i] +arr[j] == s)
//             {
//             	vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
// 				ans.push_back(temp);
//             }
//         }
//    }
//    sort(ans.begin(), ans.end());
//    return ans;
// }





// // --------------------------------------------------------








// not able to git proper output: every thing is OK. the only pronbelm is getting 
// undefined extra at the end.

let printArray = (arr) => {
    for (let i = 0; i < arr.length; i++){
        console.log(arr[i])
    }
    
}

let sortOne = (arr) => {
     let left = 0
     let right = arr.length-1

     while (left < right){
         while (arr[left] == 0 && left < right){
             left++
         }
         while (arr[right] == 1 && left < right){
             right--
         }

         if(left<right){
             let temp
             temp = arr[left] 
            arr[left] = arr[right]
             arr[right] = temp 
         left++
         right--
         }
     }
}

let arr1 = [1,1,0,0,0,0,1,0]

sortOne(arr1)
console.log(printArray(arr1))



// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void sortOne(int arr[], int n) {

//     int left = 0, right = n-1;

//     while(left < right) {

//         while(arr[left] == 0 && left < right )  {
//             left++;
//         }

//         while(arr[right]==1 && left < right){
//             right--;
//         }

//         //agar yha pohoch gye ho, iska matlab
//         //arr[left]==1 and arr[right]==0
//         if(left<right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

// }

// int main() {

//     int arr[8] = {1,1,0,0,0,0,1,0};

//     sortOne(arr, 8);
//     printArray(arr, 8);


//     return 0;
// }



// Output:
// 0
// 0
// 0
// 0
// 0
// 1
// 1
// 1
// undefined



// // --------------------------------------------------------