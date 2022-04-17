let firstOcc = (arr, key) => {
    let s = 0;
    let e = arr.length-1
    let ans = -1
    let mid = s + Math.floor(s + (e-s)/ 2)


    while (s <= e){
        if (arr[mid] === key){
        //    console.log(arr[mid])
            ans = mid
            e = mid - 1

        }else if (key > arr[mid]){
            s = mid + 1
            
        }else if (key < arr[mid]){
            e = mid - 1
        }

        mid = s + Math.floor((e-s)/ 2)
       // console.log(mid)
    }
    return ans
}


let LastOcc = (arr, key) => {
   let s = 0;
   let e = arr.length-1
   let ans = -1
   let mid = s + Math.floor(s + (e-s)/ 2)


   while (s <= e){
       if (arr[mid] === key){
         // console.log('arr[mid] '+arr[mid])
           ans = mid
           s = mid + 1
           //console.log('s' + s)

       }else if (key > arr[mid]){
           s = mid + 1
           
       }else if (key < arr[mid]){
           e = mid - 1
       }
       
       mid = s + Math.floor((e-s)/ 2)
   //   console.log(mid)
   }
   return ans
}


let even = [1,2,3,3,3,3,3,3,3,3,3,3,5]
const firstOccurece =  firstOcc(even, 3)
const LastOccurece =  LastOcc(even, 3)

const totalOccurece = (LastOccurece -firstOccurece) + 1
console.log(totalOccurece)


// Output:
// 10