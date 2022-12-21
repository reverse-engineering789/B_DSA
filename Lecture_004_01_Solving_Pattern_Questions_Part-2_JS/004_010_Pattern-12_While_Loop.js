const n = 4

let row = 1
while (row <= n){
    let col = 1 

    while (col <= row){
        let ch = String.fromCharCode('A'.charCodeAt(0) + row + col - 2)
        console.log (ch)
        col = col + 1
    }
    console.log(' ')
    row = row + 1
}

// Output:
// A
 
// B
// C

// C
// D
// E

// D
// E
// F
// G
