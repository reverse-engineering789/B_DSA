// 015_01_Book_Allocation_Problem.js


// ne4ed to check input format is correct or not. 
// gitting output as ==> -1 
// not able to get proper output. 



let isPossible = (arr, n, m, mid) => {
    let studentCount = 1
    let pageSum = 0

    for (let i = 0; i < n; i++){
        if (pageSum + arr[i] <= mid){
            pageSum += arr[i]
        }else{
            studentCount++
            if (studentCount > m || arr[i] > mid){
                return false 
            }
            pageSum = arr[i]
        }
    }
}




let allocateBooks = (arr, n, m ) => {
let s = 0
let sum = 0

for (let i = 0; i < n; i++){
    sum = sum + arr[i]
}

let e = sum; 
let ans = -1
let mid = s + (e - s) / 2

while (s <= e){
    if (isPossible(arr,n,m, mid)){
        ans = mid 
        e = mid - 1
    }else{
        s = mid + 1
    }
    mid = s + (e  - s) / 2
}
return ans 
}


let example = [12,10,20,30,40]

let test = allocateBooks(example, 5, 2 )
console.log(test)


// Output:
// -1

//------------------------------------------------------------------

