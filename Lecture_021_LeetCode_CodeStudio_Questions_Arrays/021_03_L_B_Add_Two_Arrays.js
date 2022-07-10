// Not able to handle the testcases that contains the carry.

// getting correct answers for those testcases which dont have carry




let reverse = (v) => {
    let s = 0
    let e = v.length - 1

    while (s < e){
    let temp = v[s] 
    v[e] = v[s]
    v[s] = temp
    s++
    e--
    }
    return v
}

let findArraySum = (a, b) => {
     let i = a.length - 1 
     let j = b.length - 1
     let ans = []
     let carry = 0 

     while (i >= 0 && j >= 0){
         let val1 = a[i]
         let val2 = b[j]

         let sum = val1 + val2 + carry

         carry = Math.floor(sum / 10)
         sum = sum % 10
         ans.push(sum)
         i--
         j--
     }
// first case
     while (i >= 0){
    let sum = a[i] + carry
    carry = Math.floor(sum / 10)
    sum = sum % 10
    ans.push(sum)
    i--
     }

// second case
while (j >= 0){
    let sum = b[j] + carry
    carry = Math.floor(sum / 10)
    sum = sum % 10
    ans.push(sum)
    j--
}


while (carry !== 0){
    let sum = carry 
    carry = Math.floor(sum / 10)
    sum = sum % 10
    ans.push(sum)
}


return (reverse(ans))

}

let array1 = [6]
let array2 = [6]

let test = findArraySum(array1, array2)
console.log(test)





// // ------------------------------------------------------------


// // ------------------------------------------------------------

// Old code - first code
// let reverse = (v) => {
//     let s = 0
//     let e = v.length - 1

//     while (s < e){
//     let temp = v[s] 
//     v[e] = v[s]
//     v[s] = temp
//     s++
//     e--
//     }
//     return v
// }

// let findArraySum = (a, b) => {
//      let i = a.length - 1 
//      let j = b.length - 1
//      let ans = []
//      let carry = 0 

//      while (i >= 0 && j >= 0){
//          let val1 = a[i]
//          let val2 = b[j]

//          let sum = val1 + val2 + carry

//          carry = sum / 10
//          sum = sum % 10
//          ans.push(sum)
//          i--
//          j--
//      }
// // first case
//      while (i >= 0){
//     let sum = a[i] + carry
//     carry = sum / 10
//     sum = sum % 10
//     ans.push(sum)
//     i--
//      }

// // second case
// while (j >= 0){
//     let sum = b[j] + carry
//     carry = sum / 10
//     sum = sum % 10
//     ans.push (sum)
//     j--
// }


// while (carry !== 0){
//     let sum = carry 
//     carry = sum / 10
//     sum = sum % 10
//     ans.push(sum)
// }


// return (reverse(ans))

// }

// let arr1 = [1,2,3]
// let arr2 = [3]

// let test = findArraySum(arr1, arr2)
// console.log(test)


// // Output:
// // [
// //     6,                    2.6,                   1.26,
// // 0.126,                 0.0126,                0.00126,
// // 0.000126,              0.0000126,             0.00000126,
// // 1.26e-7,  1.2599999999999999e-8,  1.2599999999999998e-9,
// // 1.2599999999999998e-10, 1.2599999999999997e-11, 1.2599999999999997e-12,
// // 1.2599999999999997e-13, 1.2599999999999996e-14, 1.2599999999999996e-15,
// // 1.2599999999999995e-16, 1.2599999999999995e-17, 1.2599999999999995e-18,
// // 1.2599999999999995e-19, 1.2599999999999994e-20, 1.2599999999999994e-21,
// // 1.2599999999999993e-22, 1.2599999999999994e-23, 1.2599999999999994e-24,
// // 1.2599999999999994e-25, 1.2599999999999994e-26, 1.2599999999999994e-27,
// // 1.2599999999999993e-28, 1.2599999999999993e-29, 1.2599999999999993e-30,
// // 1.2599999999999993e-31, 1.2599999999999994e-32, 1.2599999999999994e-33,
// // 1.2599999999999995e-34, 1.2599999999999993e-35, 1.2599999999999994e-36,
// // 1.2599999999999993e-37, 1.2599999999999992e-38, 1.2599999999999992e-39,
// // 1.2599999999999992e-40, 1.2599999999999992e-41, 1.2599999999999992e-42,
// // 1.2599999999999992e-43, 1.2599999999999992e-44, 1.2599999999999992e-45,
// // 1.2599999999999993e-46, 1.2599999999999993e-47, 1.2599999999999993e-48,
// // 1.2599999999999993e-49, 1.2599999999999992e-50, 1.2599999999999992e-51,
// // 1.2599999999999992e-52, 1.2599999999999993e-53, 1.2599999999999994e-54,
// // 1.2599999999999994e-55, 1.2599999999999994e-56, 1.2599999999999994e-57,
// // 1.2599999999999994e-58, 1.2599999999999994e-59, 1.2599999999999994e-60,
// // 1.2599999999999994e-61, 1.2599999999999995e-62, 1.2599999999999995e-63,
// // 1.2599999999999994e-64, 1.2599999999999994e-65, 1.2599999999999994e-66,
// // 1.2599999999999995e-67, 1.2599999999999995e-68, 1.2599999999999994e-69,
// // 1.2599999999999994e-70, 1.2599999999999995e-71, 1.2599999999999994e-72,
// // 1.2599999999999994e-73, 1.2599999999999994e-74, 1.2599999999999993e-75,
// // 1.2599999999999992e-76, 1.2599999999999992e-77, 1.2599999999999991e-78,
// // 1.2599999999999992e-79, 1.2599999999999991e-80, 1.2599999999999992e-81,
// // 1.2599999999999992e-82, 1.2599999999999992e-83,  1.259999999999999e-84,
// // 1.2599999999999991e-85,  1.259999999999999e-86,  1.259999999999999e-87,
// // 1.259999999999999e-88,  1.259999999999999e-89,  1.259999999999999e-90,
// // 1.2599999999999991e-91, 1.2599999999999992e-92, 1.2599999999999992e-93,
// // 1.2599999999999993e-94, 1.2599999999999993e-95, 1.2599999999999993e-96,
// // 1.2599999999999992e-97,
// // ... 226 more items
// // ]
// //----------------------------------------------------------------------------
// C++ Code:



// vector<int> reverse(vector<int> v) {
    
//     int s = 0;
//     int e = v.size()-1;
    
//     while(s<e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
//     int i = n-1;
//     int j = m-1;
//     vector<int> ans;
//     int carry = 0;
    
//     while(i>=0 && j>=0) {
//         int val1 = a[i];
//         int val2 = b[j];
            
//         int sum = val1 + val2 + carry;   
        
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
    
//     // first case
//     while(i>=0) {
//         int sum = a[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//     }
    
//      // second case
//     while(j>=0) {
//         int sum = b[j] + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         j--;
//     }
    
//      // second case
//     while(carry != 0) {
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
    
//     //print(ans);
//     return reverse(ans);
// }
//====================================================
