class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>::iterator it;
        it=find( nums.begin(), nums.end(), target);
        if( it != nums.end()){
            return (it - nums.begin());
        }
        else{
            nums.insert( nums.begin() , target);
            sort( nums.begin(), nums.end());
            it=find( nums.begin(), nums.end(), target);
        if( it != nums.end()){
            return (it - nums.begin());
        }
        }
        
        return n;
        
    }
};