const modularExponentiation = (x, n, m) => {
    let res = 1

    while (n > 0){
        if (n&1){
            // odd
            res = ((res) * (x) %m)%m
        }
        x = ((x)%m * (x)%m)%m
        n = n >> 1
    }
    return res
}

const test1 = modularExponentiation(3, 1, 2)
const test2 = modularExponentiation(4, 3, 10)

console.log(test1)
console.log(test2)

// Output:
// 1
// 4