const a 
console.log(a)

// Output:
// undefined

//-----------------------------------------


const a = 3 

console.log (a)

if (true){
    const a = 5
    console.log('scoping ' + a)
}

console.log('Out of Scoping '+ za)

// Output:
// 3
// scoping 5
// Out of Scoping 3


//-------------------------------------------------


let i = 8 

for (let i = 0; i < 8; i++){
    console.log('HI')
}

// Output:
// HI
// HI
// HI
// HI
// HI
// HI
// HI
// HI

//--------------------------
let i = 8 

for (; i < 8; i++){
    console.log('HI')
}

// Output:
// No Output.


//-----------------------------------------------


if (1){
    const b
    if (1){
        const b
    }if (1){
        const b
    }
}


