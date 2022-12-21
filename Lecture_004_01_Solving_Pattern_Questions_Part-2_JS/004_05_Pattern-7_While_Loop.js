//  // PROBLEM: NOT ABLE TO PRINT THE PATTERN IN THE NEW LINE


let n = 4


let row = 1
while (row <= n){

    let col = 1
    while (col <= row){
        console.log(`${row}`)
           col = col + 1
        }
        console.log('\n')
        row = row + 1
}

// // Output:
// // 1


// // 2
// // 2


// // 3
// // 3
// // 3


// // 4
// // 4
// // 4
// // 4
