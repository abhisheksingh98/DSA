class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        
        return find(nums,start,end,n);
    }
        
    int find(vector<int>& nums, int start, int end, int n){
        //Base Case
        if(start>end){
            return -1;
        }
        
        //My work
        int mid = (start+end)/2;
        
        if((mid==0 or nums[mid-1]<nums[mid]) and (mid==n-1 or nums[mid] > nums[mid+1])){
            return mid;
        }
        
        if(nums[mid]<nums[mid+1]){
            return find(nums,mid+1,end,n);
        }
        else {
            return find(nums, start, mid-1,n);
        }
    }
    
};