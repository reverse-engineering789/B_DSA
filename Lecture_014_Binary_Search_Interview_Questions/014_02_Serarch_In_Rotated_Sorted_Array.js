// not able to give input value
// not able to understand how to give input value

let getPivot = (arr) => {
    let s = 0
    let e = arr.length - 1
    let mid = s + (e - s) / 2


while (s < e) {
    if (arr[mid] >= arr[0]){
        s = mid + 1
    }else{
        e = mid
    }
    mid = s + (e - s) / 2
}
return s 
}


let binarySearch = (arr, s, e, key) => {


    let start = s 
    let end = e

    let mid = start + (end - start) / 2

    while (start <= end) {
        if (arr[mid] == key) {
            return mid
        }
        if (key > arr[mid]){
            start = mid + 1
        }
        mid = start + (end - start) / 2
    }
    return -1
}


let findPostion = (arr, k) => {
   let pivot = getPivot(arr)
   if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, arr.length-1, k)
   } else {
       return binarySearch(arr, 0, pivot-1, k )
   }
}


let test1 = [7,8,1,3,5]

let check = findPostion(test1)

console.log(check)





//--------------------------------------------------




// c++ code 
// #include<vector>
// using namespace std;

// int getPivot(vector<int>& arr, int n) {

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {

//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(vector<int>& arr, int s, int e, int key) {

//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }



// int findPosition(vector<int>& arr, int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if( k >= arr[pivot] && k <= arr[n-1])
//     {//BS on second line
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else
//     {//BS on first line
//         return binarySearch(arr, 0, pivot - 1, k);
//     }
    
// }