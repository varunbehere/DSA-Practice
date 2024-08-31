// Problem Statement: Given a string str, write a function reverseString(str) that returns the string in reverse order.
// Example:
// Input: str = "hello"
// Output: "olleh"

function reverseStringWithoutfunctions(str){
    let newString = ""
    for (let i = str.length-1; i >= 0; i--){
        newString += str[i]
    }
    return newString
}

function reverseStringWithFunctions (str) {
    return str.split('').reverse().join('')
}

const str = "Hello World"

const revStrWithoutFunction = reverseStringWithoutfunctions(str)
const revStrUsingFunction = reverseStringWithFunctions(str)

console.log(revStrWithoutFunction)
console.log(revStrUsingFunction)