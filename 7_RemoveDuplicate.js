// Remove Duplicates from an Array
// Problem Statement: Write a function removeDuplicates(arr) that removes all duplicates from an array arr and returns a new array with unique elements.
// Example:
// Input: arr = [1, 2, 2, 3, 4, 4, 5]
// Output: [1, 2, 3, 4, 5]

// This has O(n square) time complexity
function removeDuplicates (Arr){
    let iDiscovered = []
    for (i = 0; i < Arr.length; i++ ){
        if (!iDiscovered.includes(Arr[i]))  iDiscovered.push(Arr[i])
    }
    return iDiscovered
}

// This will have Time Complexity of O(n)
function betterRemoveDuplicates (Arr){
    let unique = []
    // To store the flag for discovered 
    let seen = {}
    for (i= 0 ; i< Arr.length; i++){
        if (!seen[Arr[i]]){
            seen[Arr[i]] = true
            unique.push(Arr[i])
        }
    }
    return unique
}

console.log(removeDuplicates([1, 2, 2, 3, 4, 4, 5]))
console.log(betterRemoveDuplicates([1, 2, 2, 3, 4, 4, 5]))