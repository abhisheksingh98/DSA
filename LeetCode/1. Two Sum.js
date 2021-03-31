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

// Optimized Solution using HashMap - O(n)

const twoSum = function(nums, target){
    const numsMap = {};
    for(let i =0;i< nums.length; i++){
        const currentMapVal = numsMap[nums[i]];
        if(currentMapVal >=0){
            return [currentMapVal,i];
        }
        else {
            const numToFind = target - nums[i];
            numsMap[numToFind] = i;
        }
    }
    return null;
}