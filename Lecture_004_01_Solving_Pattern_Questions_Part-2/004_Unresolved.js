// 004_011_Pattern-13_While_Loop

// Type coursion problem
// start + 1

const n = 4

let row = 1
while (row <= n){
    let col = 1 
        let start = String.fromCharCode('A'.charCodeAt(0) + n - row)
    while(col <= row){
        console.log (start)
        start = start + 1
        col = col + 1
    }
    console.log(' ')
    row = row + 1
}


// Output:
// D
 
// C
// C1

// B
// B1
// B11

// A
// A1
// A11
// A111