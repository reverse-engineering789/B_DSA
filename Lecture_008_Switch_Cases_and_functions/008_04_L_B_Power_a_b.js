const power = (a, b) => {
    let ans = 1
    
    for (let i = 1; i <= b; i++){
        ans = ans * a
    }
    return ans
}


const a = 2 
const b = 3

let ans = power(a, b)
console.log('answer is: ' + ans)

// Output:
// answer is: 8


const a2 = 4 
const b2 = 3
let ans2 = power(a2, b2)
console.log('answer is: ' + ans2)
// Output:
// answer is: 64