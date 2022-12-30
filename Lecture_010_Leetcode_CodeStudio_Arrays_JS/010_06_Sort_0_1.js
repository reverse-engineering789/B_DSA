

// not able to git proper output: every thing is OK. the only pronbelm is getting 
// undefined extra at the end.


let printArray = (arr) => {
    for (let i = 0; i < arr.length; i++){
        console.log(arr[i])
    }
    
}

let sortOne = (arr) => {
     let left = 0
     let right = arr.length-1

     while (left < right){
         while (arr[left] == 0 && left < right){
             left++
         }
         while (arr[right] == 1 && left < right){
             right--
         }

         if(left<right){
             let temp
             temp = arr[left] 
            arr[left] = arr[right]
             arr[right] = temp 
         left++
         right--
         }
     }
}

let arr1 = [1,1,0,0,0,0,1,0]

sortOne(arr1)
console.log(printArray(arr1))



// Output:
// 0
// 0
// 0
// 0
// 0
// 1
// 1
// 1
// undefined