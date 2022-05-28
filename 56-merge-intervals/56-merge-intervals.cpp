class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> ans;
       sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        for(int i = 0;i<n;i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
                
            }
            vector<int> &v = ans.back();
            int y = v[1];
            if(intervals[i][0]<=y)
                v[1] = max(y,intervals[i][1]);
            else 
                ans.push_back(intervals[i]);
            
        }
        return ans;
        
    }
};