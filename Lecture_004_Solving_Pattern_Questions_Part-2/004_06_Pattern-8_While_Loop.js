let n = 4 

let row = 1

while (row <= n){

    let col = 1
    let value = row 

    while (col <= row ){
        console.log(`${value}`)
        value = value + 1
        col = col + 1
    }
    console.log('\n')
    row = row + 1
}

// // Output:
// // 1


// // 2
// // 3


// // 3
// // 4
// // 5


// // 4
// // 5
// // 6
// // 7