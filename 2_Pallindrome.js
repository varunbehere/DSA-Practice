// Problem Statement: Write a function isPalindrome(str) that checks if a given string str is a palindrome (a word that reads the same forwards and backwards).
// Example:
// Input: str = "racecar"
// Output: true

function pallindromeWithoutFunction (str){
    let newString = ""
    for (let i = str.length-1; i>= 0; i--){
        newString += str[i]
    }
    return (newString === str) ?  true :  false
}

function pallindromeWithFunction (str){
    return str.split('').reverse().join('') === str
}

const str = "racecar"
let result = pallindromeWithoutFunction(str)
console.log(result)

result = pallindromeWithFunction(str)
console.log(result)