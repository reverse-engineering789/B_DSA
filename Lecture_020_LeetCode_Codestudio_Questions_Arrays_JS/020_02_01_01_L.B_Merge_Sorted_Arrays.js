let merge = (arr1,  n, arr2, m, arr3) => {
    let i = 0
    let j = 0
    let k = 0

    while( i < n  && j < m){
        if (arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++]
        }else{
            arr3[k++] = arr2[j++]
        }
    }
    while (i < n){
        arr3[k++] = arr1[i++]
    }

    while (j < m){
        arr2[k++] = arr2[j++]
    }
}


let print = (ans, n) => {
for (let i = 0; i < n; i++){
 console.log(ans[i])
}
}


let arr1 = [1,3,5,7,9]
let arr2 = [2,4,6]
let arr3 = []


merge(arr1, 5, arr2, 3, arr3)

print(arr3, 8)


// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 9