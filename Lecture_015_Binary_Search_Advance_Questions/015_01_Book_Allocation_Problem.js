// ne4ed to check input format is correct or not. 
// gitting output as ==> -1 
// not able to get proper output. 



let isPossible = (arr, n, m, mid) => {
    let studentCount = 1
    let pageSum = 0

    for (let i = 0; i < n; i++){
        if (pageSum + arr[i] <= mid){
            pageSum += arr[i]
        }else{
            studentCount++
            if (studentCount > m || arr[i] > mid){
                return false 
            }
            pageSum = arr[i]
        }
    }
}




let allocateBooks = (arr, n, m ) => {
let s = 0
let sum = 0

for (let i = 0; i < n; i++){
    sum = sum + arr[i]
}

let e = sum; 
let ans = -1
let mid = s + (e - s) / 2

while (s <= e){
    if (isPossible(arr,n,m, mid)){
        ans = mid 
        e = mid - 1
    }else{
        s = mid + 1
    }
    mid = s + (e  - s) / 2
}
return ans 
}


let example = [12,10,20,30,40]

let test = allocateBooks(example, 5, 2 )
console.log(test)


// Output:
// -1



// c++ CODE: 

// #include<vector>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }