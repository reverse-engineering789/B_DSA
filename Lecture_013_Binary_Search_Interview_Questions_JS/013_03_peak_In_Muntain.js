
// // peak in mountain array // leetcode 



let peakIndex = (arr) => {
    let s = 0 
    let e = arr.length-1

    let mid = s + Math.floor((e-s) / 2)

    while (s < e){
        if (arr[mid] < arr[mid + 1]){
           s = mid + 1
        }else{
            e = mid
        }
        mid = s + Math.floor((e - s) / 2)
    }
    return s
}


let test1 = [3,4,5,6,8,9,5,4,1]
let test2 = [3,4,5,1]
let test3 = [0,8,10,5,2]

let check1 = peakIndex(test1)
let check2 = peakIndex(test2)
let check3 = peakIndex(test3)


console.log(check1)
console.log(check2)
console.log(check3)


// // Output:
// // 5
// // 2
// // 2


// // -----------------------------------------------------------