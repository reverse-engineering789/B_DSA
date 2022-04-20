const subtractProductAndSum = (n) => {
    let prod = 1
    let sum = 0

    while(n !== 0){
        let digit = n % 10
        // console.log(digit)
        prod = prod * digit 
        // console.log(prod)
        sum = sum + digit
        n = Math.floor(n / 10)
    }
    // console.log(prod)
    // console.log(sum)
    let answer = prod - sum
    // console.log('ans ' + answer)
    return answer
}

let testCase = subtractProductAndSum(234)
console.log(testCase)