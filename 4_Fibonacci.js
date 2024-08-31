// Problem Statement: Write a function fibonacci(n) that returns the nth Fibonacci number. The Fibonacci sequence is defined as follows:
// fibonacci(0) = 0
// fibonacci(1) = 1
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) for n > 1
// Example:
// Input: n = 6
// Output: 8 (because the sequence is 0, 1, 1, 2, 3, 5, 8,...)

function fibonacci (uptoN){
    let start = 0;
    let next = 1;
    let temp = 0;

    for (let i = 1; i < uptoN; i++){
    temp = next
        next = start + next
    start = temp
    }
    return next
}

console.log(fibonacci(6))