// In this approach we use following steps.

// First we iterate over a string in forward and backward direction.
// Check if all forward and backward character matches, return true.
// If all forward and backward character does not matches, return false.
// If return is true, it is a palindrome.




function check_palindrome( str )
{   
    let s = 0
	let e = str.length -1;

while(s<=e) {
    let x = str[s] ;//forward character
    let y = str[e];//backward character
    	if( x != y)
            {
                return false;       
            }
            else{
                s++;
                e--;
            }
        }
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

is_palindrome(test);

// // Output:
// // passed string is palindrome 
