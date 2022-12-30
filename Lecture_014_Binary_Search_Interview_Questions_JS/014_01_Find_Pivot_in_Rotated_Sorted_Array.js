let getPivot = (arr) => {
    let s =  0 
    let e = arr.length-1
    let mid = s + (e - s) / 2

while (s < e) {
    if (arr [mid] >= arr[0]){
        s = mid + 1
    }else{
        e = mid
    }
    mid = s + (e - s) / 2
}
return s 
} 

let test1 = [8,10,17,1,3]
let test2 = [3,8,10,17,1]

let pivot1 = getPivot(test1)
let pivot2 = getPivot(test2)

console.log('Pivot element is: ' + pivot1)
console.log('Pivot element is: ' + pivot2)

// Output:
// Pivot element is: 3
// Pivot element is: 4