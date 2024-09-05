// Rotate an Array
// Problem Statement: Write a function rotateArray(arr, k) that rotates an array arr to the right by k steps.
// Example:
// Input: arr = [1, 2, 3, 4, 5], k = 2
// Output: [4, 5, 1, 2, 3]

function RotateArray (newArr){
    let temp = 0
    for (i = 0,  j = newArr.length-1; i<= (newArr.length)/2; i++, j--){
        temp = newArr[i]
        newArr[i] = newArr [j]
        newArr[j] = temp
    }
    return newArr
}

let tempArr = [1,2,3,4,5,6,7,8,9,10,11]
console.log(RotateArray(tempArr))