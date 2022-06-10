class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        int g = n/2;
        for(auto i:m){
            if(i.second > g)
                return i.first;
        }
        
        return 0;
    }
};