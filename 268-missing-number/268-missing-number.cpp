class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool b ;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=i){
                b = false;
                return i;
                
                break;
            }
        else{
           b = true;
        }
        
        }
        if(b == true)
            return (nums.size());
        return 0;
        
    }
};