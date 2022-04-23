const bitwiseCOmplement = (n) => {
   
    let m = n
    let mask = 0

    if (n === 0){
        return 1
    }
    while (m !== 0){
        mask = (mask << 1) | 1
        m = m >> 1
    }

    const ans = (~n) & mask

    return ans
}

const testCase1 = bitwiseCOmplement(5)
console.log(testCase1)

// Output:
// 2