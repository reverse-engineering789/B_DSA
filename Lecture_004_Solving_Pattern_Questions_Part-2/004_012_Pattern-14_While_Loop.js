const n  = 4 

let row = 1


while (row <= n){
    let space = n - row
    while (space) {
        console.log(" ")
        space = space - 1
    }

    let col = 1
    while (col <= row){
        console.log('*')
        col = col + 1
    }
    row = row + 1
    console.log(' ')
}

// Output:

// *



// *
// *


// *
// *
// *

// *
// *
// *
// *