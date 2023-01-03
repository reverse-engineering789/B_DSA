
// 022_08_02_L.B_LeetCode2_Remove_All_Occurences_of_substring.

// Not able to understand the code. 

 var removeOccurrences = function(s, part) {
    let result = []
    const partLen = part.length
    function endsWith() {
        const resultLen = result.length
        if (resultLen < partLen)
            return false
        
        for (let offset = 1; offset <= partLen; offset++) {
            const chPart = part[partLen - offset]
            const chS = result[resultLen - offset]
                     if (chPart !== chS) return false
        }
        
        return true
    }
    
    
    for (const ch of s) {
        result.push(ch)
        if (endsWith()) {
            result.length -= partLen
        }
    }
    
    
    result = result.join('')
    return result
}