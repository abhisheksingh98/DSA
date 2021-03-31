// Brute Force Approach 1 - O(n^2)

const twoSum = function(nums, target){
    for(let i = 0; i < nums.length;i++){
        for(let j = i+1; j <nums.length;j++){
            if(nums[i] + nums[j] === target){
                return [i,j];
            }
        }
    }
    return null;
}

// Approach 2 - O(n^2)
const twoSum = function(nums, target){
    for(let i = 0; i < nums.length; i++){
        let numToFind = target - nums[i];
        for(let j = i+1; j <nums.length; j++){
            if(numToFind === nums[j]) return [i,j];
        }
    }
    return null;
}