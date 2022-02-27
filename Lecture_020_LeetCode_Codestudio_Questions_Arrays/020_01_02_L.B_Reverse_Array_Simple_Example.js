// Problem: Not able to get the output:

// L. B solution: 

// simple example FOR REVERSING: 


let reverse = (v) => {
     let s = 0 
     let e = v.length - 1

     while (s <= e){
         temp = v[s]
         v[s] = v[e]
         v[e] = temp
         s++
         e--
     }
     return v
}

let print = (v) => {
    for (let i = 0; i < v.length; i++){
        console.log((v[i]) + " ")
    }
}

let v = [11,7,3,12,4]



//-------------------------------------------------------




// c++ code: 

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v) {

//     int s = 0, e =v.size()-1;

//     while(s<=e) {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }

//     return v;

// }

// void print(vector<int> v) {

//     for(int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     vector<int> v ;

//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans = reverse(v);

//     cout << "Printing reverse Array" <<endl;
//     print(ans);


//     return 0;
// }