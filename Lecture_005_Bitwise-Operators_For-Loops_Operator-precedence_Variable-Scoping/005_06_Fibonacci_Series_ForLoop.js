let a = 0
let b = 1
let n = 10
console.log(a)
console.log(b)

for (let i = 0; i <= n; i++){
     let nextNum = a + b
     console.log(nextNum)

     a = b
     b = nextNum
}


// Output:
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144




//--------------------------------------------------------




// storing the answer in array


const n = 20
let a = 0
let b = 1
let arr = []
arr.push(0)
arr.push(1)
for (let i = 0; i <= n; i++ ){
    
    let nextNumber = a + b
    
     arr.push(nextNumber)

    a = b
    b = nextNumber
}

console.log(arr)


// Output:
// [
//     0,     1,     1,    2,    3,
//     5,     8,    13,   21,   34,
//    55,    89,   144,  233,  377,
//   610,   987,  1597, 2584, 4181,
//  6765, 10946, 17711
// ]


