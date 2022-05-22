//  // PROBLEM: NOT ABLE TO PRINT THE PATTERN IN THE NEW LINE

// reversing the output of the above program: 
// by just adding console.log(n-j+1)

let n = 4 

let i = 1

while (i <= n){

    let j = 1
    while(j <= n){
        console.log(n-j+1)
        j = j + 1
    }
    console.log('\n')
    i = i + 1
}


// // Output:
// // 4
// // 3
// // 2
// // 1


// // 4
// // 3
// // 2
// // 1


// // 4
// // 3
// // 2
// // 1


// // 4
// // 3
// // 2
// // 1



// // -----------------------------------------------------------