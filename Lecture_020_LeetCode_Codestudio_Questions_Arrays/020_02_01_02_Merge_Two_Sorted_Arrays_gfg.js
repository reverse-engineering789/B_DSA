// gfg


let  mergeArrays = (arr1, arr2 , n1 , n2, arr3) => {
		let i = 0, j = 0, k = 0;
        
        // Traverse both array
		while (i < n1 && j < n2) {
			// Check if current element of first
			// array is smaller than current element
			// of second array. If yes, store first
			// array element and increment first array
			// index. Otherwise do same with second array
			if (arr1[i] < arr2[j])
				arr3[k++] = arr1[i++];
			else
				arr3[k++] = arr2[j++];
		}

		// Store remaining elements of first array
		while (i < n1)
			arr3[k++] = arr1[i++];

		// Store remaining elements of second array
		while (j < n2)
			arr3[k++] = arr2[j++];
	}

	
		let arr1 = [ 1, 3, 5, 7 ];
		let n1 = arr1.length;

		let arr2 = [ 2, 4, 6, 8 ];
		let n2 = arr2.length;

		let arr3 = Array(n1 + n2).fill(0);

		mergeArrays(arr1, arr2, n1, n2, arr3);

		console.log("Array after merging: ")
		for (i = 0; i < n1 + n2; i++)
			console.log(arr3[i] + " ")


// Output:
// Array after merging: 
// 1 
// 2
// 3
// 4
// 5
// 6
// 7
// 8