// Brute Force Approach

const maxArea = function(heights){
    let maxArea = 0;
    for(let i=0; i<heights.length; i++){
        for(let j=i+1; j<heights.length; j++){
            const height = Math.min(heights[i], heights[j]);
            const width = j-i;
            const area = height*width;
            maxArea = Math.max(maxArea,area);
        }
    }
    return maxArea;
}
