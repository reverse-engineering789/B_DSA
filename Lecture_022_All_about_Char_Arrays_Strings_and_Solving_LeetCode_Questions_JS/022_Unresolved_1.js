// 022_02_01_L_B_Reverse_a_String.js



let reverseString = (s) => {
    let st = 0
    let e = s.length-1

    while (st <= e) {
          temp = s[st]
        //   console.log(temp + ' temp')
        //   console.log(s[st] +' s[t]')
          s[st] = s[e] 
          s[e] = temp
        //   console.log(s[e] +' s[e]')
        //   console.log(temp + ' temp2')
          st++
          e--
          
 }
 console.log(s)
}


 let naame = 'surya'



// Output: 


// c++ code:
// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:

//     void reverseString(vector<char>& s) {
//         int st=0;
//         int e = s.size()-1;

//         while(st<e) {
//             swap(s[st++], s[e--]);
//         }
//     }
// }