let i = 5 

for (let j = 1; j <=i; j++){
    console.log(j)
}

// Output:
// 1
// 2
// 3
// 4
// 5

// small changes:

let i = 5 
let j = 1
for (; j <=i; j++){
    console.log(j)
}

// Output:
// 1
// 2
// 3
// 4
// 5



//---------------------------------------------------

// Infinite loop:
let i = 5 
let j = 1
for (; ;){
    if (j <= i){
    console.log(j)
}
j++
}


// Output:
// 1
// 2
// 3
// 4
// 5
// .
// .
// .
// .


// ------------------------------------------

// stop Infinite loop: 
// using break

let i = 5 
let j = 1
for (; ;){
    if (j <= i){
    console.log(j)
}else{
    break;
}
j++
}


// Outpit:
// 1
// 2
// 3
// 4
// 5

// ------------------------------------------

// Multiple variables and conditions:

for (let a = 0,   b = 1; a >= 0 && b >=1; a--, b--){
    console.log(a + ' ' + b) 
}

// Output:
// 0 1

// ------------------------------------------

for (let a = 0,   b = 1, c = 2; a >= 0 && b >=1 && c >= 2; a--, b--, c--){
    console.log(a + ' ' + b +' ' + c) 
}

// Output:
// 0 1 2

