let  string = ''
const reverseString = (str) => {
    for (let i = str.length-1; i >= 0; i--){
        string = string + str[i]
    }
    console.log(string)
}


 reverseString('Surya')

//  Output:
//  ayruS