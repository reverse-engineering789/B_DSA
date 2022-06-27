

const pairSum = (arr, sum) => {
    let   count = 0
    let sumToatal = []
         for (let i = 0; i <= arr.length-1; i++){
             for (let j = i+1; j <= arr.length-1; j++){
                 if (arr[i] + arr[j] === sum){
                     sumToatal.push(arr[i], arr[j])
                       count++ 
                   console.log("(" + arr[i] + ", " + arr[j] + ")" );
                 }
             }
         }
         return count
      }
  
      
  
  const number = 6
  const array = [1,2,4,5,6,3]
  console.log(pairSum(array, number))
  
  
// // Output:
// (1, 5)
// (2, 4)
// 2

// // -------------------------------
// L_B

// let pairSum = (arr, s) => {
//     let ans = []

//     for (let i = 0; i < arr.length; i++){
//         for (let j = i+1; j < arr.length; j++){
//             if (arr[i] + arr[j] == s){

//                 let temp = []
//                 temp.push(min(arr[i], arr[j]))
//                 temp.push(max(arr[i], arr[j]))
//                     ans.push(temp)

//             }
//         }
//     }
//     arr.sort()
//    return ans
// }
// let s = 6
// let arr = [1,2,4,5,6,3]


// console.log(pairSum(arr))

//  ---------------C++-----------------
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


//-------------------------------------------------------------



