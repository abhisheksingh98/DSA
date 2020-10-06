class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum = nums[0];
        int maxTillHere = nums[0], minTillHere = nums[0];
        
        for(int i=1;i<nums.size();i++){
            int temp = maxTillHere;
            
            maxTillHere = max({nums[i], nums[i]*maxTillHere, nums[i]*minTillHere});
            minTillHere = min({nums[i] , nums[i]*temp, nums[i]*minTillHere});
            maxSum = max(maxSum,maxTillHere);
        }
        return maxSum;
    }
};