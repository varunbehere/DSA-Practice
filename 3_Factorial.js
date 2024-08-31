// Problem Statement: Write a recursive function factorial(n) that returns the factorial of a given number n.
// Example:
// Input: n = 5
// Output: 120 (because 5! = 5 * 4 * 3 * 2 * 1)

function factorial (N){
    let result  = 1
    while (N > 0){
        result *= N
        N--;
    }
    return result
}

const n = 1
console.log(factorial(n))