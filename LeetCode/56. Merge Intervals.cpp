class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals){
            vector<vector<int>> mergeIntervals;
            if(intervals.size()==0){
                return mergeIntervals;
            }

            sort(intervals.begin(), intervals.end());
            vector<int> tempInterval = intervals[0];

            for(auto it : intervals){
                
            }
        }
}