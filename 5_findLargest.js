// Find the Largest Element in an Array
// Problem Statement: Write a function findLargest(arr) that takes an array arr and returns the largest element in that array.
// Example:
// Input: arr = [1, 5, 3, 9, 2]
// Output: 9


function FindLargest (numsArr){
    let iMax = 0
    for (i = 0; i<= numsArr.length; i++){
        if (numsArr[i] > iMax){
            iMax = numsArr[i]
        }
    }
    return iMax
}

let iArr = [234,3454,5674,123,12,456,6,3256,63421]
console.log(FindLargest(iArr))