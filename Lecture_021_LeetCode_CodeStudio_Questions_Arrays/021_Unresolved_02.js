// 021_02_L_B_Check_Array_is_Sorted_and_Rotated.js


// getting error while executing the code. Not able to run the code.


let reverse = (v) => {
    let s = 0
    let e = v.length - 1 


while (s < e){
    let temp = v[s] 
    v[e] = v[s]
    v[s] = temp
    s++
    e--
}
return v
}


let findArraySum  = (n, m) => {
    let i = n - 1
    let j = m - 1
    let ans 
    let carry = 0

    while (i >= 0 && j >= 0){
        let val1 = a[i]
        let val2 = b[j]

        let sum = val1 + val2 + carry

        carry = sum / 10
        sum = sum % 10
        ans.push_back(sum)
        i--
        j--
    }

    while (i >= 0){
        let sum = a[i] + carry
        carry = sum/10
        sum = sum%10
        ans.push_back(sum)
        i--
    }

    while(carry != 0){
        let sum = carry
        carry = sum/10
        sum = sum%10
        ans.push_back(sum)
    }
    return reverse(ans)
    }


let array1 = [1,2,4]
let array2 = [3]
let test = findArraySum(array1, array2)

console.log(test)



// C++ code:



// vector<int> reverse(vector<int> v) {
    
//     int s = 0;
//     int e = v.size()-1;
    
//     while(s<e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
//     int i = n-1;
//     int j = m-1;
//     vector<int> ans;
//     int carry = 0;
    
//     while(i>=0 && j>=0) {
//         int val1 = a[i];
//         int val2 = b[j];
            
//         int sum = val1 + val2 + carry;   
        
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
    
//     // first case
//     while(i>=0) {
//         int sum = a[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//     }
    
//      // second case
//     while(j>=0) {
//         int sum = b[j] + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         j--;
//     }
    
//      // second case
//     while(carry != 0) {
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
    
//     //print(ans);
//     return reverse(ans);
// }
    