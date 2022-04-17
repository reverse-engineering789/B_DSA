

// in arrays u do give the address of the array elment. so the array gets updated


    let update = (arr) => {
        console.log('Inside the function!')
         
     arr[0] = 100
        for (let i = 0; i < 3; i++){
            console.log(arr[i])
        }
        console.log('going back to main')
}

let arr = [1,2,3]

update(arr)

for (let i = 0; i < 3; i++){
    console.log(arr[i])
}

// Output:
// Inside the function!
// 100
// 2
// 3
// going back to main
// 100
// 2
// 3
// //-----------------------------------------------------------------------------

// in arrays u do give the address of the array elment. so the array gets updated