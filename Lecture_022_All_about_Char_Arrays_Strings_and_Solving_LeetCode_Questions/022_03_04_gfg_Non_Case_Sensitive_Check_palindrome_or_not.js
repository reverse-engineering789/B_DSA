// In this approach we use following steps.

// First we iterate over a string in forward and backward direction.
// Check if all forward and backward character matches, return true.
// If all forward and backward character does not matches, return false.
// If return is true, it is a palindrome.


// function that check str is palindrome or not
function check_palindrome( str )
{
	let j = str.length -1;
	for( let i = 0 ; i < j/2 ;i++)   // j/2 beacuse u need to travel only half array in the 
    // reverse direction since its a palindrome
	{
	let x = str[i] ;//forward character
	let y = str[j-i];//backward character
	if( x != y)
	{
		// return false if string not match
		return false;
	}
	}
	/// return true if string is palindrome
	return true;
	
}

//function that print output is string is palindrome
function is_palindrome( str )
{
	// variable that is true ig string is palindrome
	let ans = check_palindrome(str);
	//condition checking ans is true or not
	if( ans == true )
	{
	console.log("passed string is palindrome ");
	}
	else
	{
	console.log("passed string not a palindrome");
	}
}
// test variable
let test = "Racecar";

let check = test.toLowerCase()
is_palindrome(check);



// Output:
// passed string is palindrome 