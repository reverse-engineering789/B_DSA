const n = 4

let row = 1
while (row <= n){
    
    // 1nd Tgle
    let space = n - row 
    while (space === true){
        console.log(' ')
        space = space - 1
    }

    // 2nd Tgle
    let j = 1
    while(j <= row){
        console.log(j)
        j = j + 1
    }
    // 3nd Tgle
    let start = row - 1
    while(start){
        console.log(start)
        start = start - 1
    }
    row = row + 1
    console.log(' ')
}


// Output:
// 1
 
// 1
// 2
// 1

// 1
// 2
// 3
// 2
// 1

// 1
// 2
// 3
// 4
// 3
// 2
// 1