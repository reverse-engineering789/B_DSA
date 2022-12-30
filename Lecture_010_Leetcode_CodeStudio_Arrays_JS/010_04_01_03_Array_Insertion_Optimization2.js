// more optimized code 

// using two pointer approach 

// questions using this approach is more comman in interview questions which 
// are related to arrays, must practice this type of questions.  


let findArrayIntersection =  (arr1, arr2) => {
    let i = 0; j = 0; 
     let ans = []
    while (i < arr1.length && j < arr2.length){

        if (arr1[i] == arr2[j]){
            ans.push(arr1[i])
               i++
               j++
        }else if (arr1[i] < arr2[j]){
            i++
        }else{
            j++
        }
    }
    return ans
}


 
let arr1 = [1,2,4,5,6,8,10]
let arr2 = [2,6,8,14]

console.log('The comman elements are: ' + (findArrayIntersection(arr1,arr2)))


// Output:
// The comman elements are: 2,6,8