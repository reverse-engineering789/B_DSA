let n = 110

let i = 0; ans = 0;

while( n!== 0){
    let digit = n % 10

    if (digit === 1){
        ans = ans + Math.pow(2, i)
    }
    n = Math.floor(n / 10)
    i++
}

console.log(ans)


// Output:
// 6