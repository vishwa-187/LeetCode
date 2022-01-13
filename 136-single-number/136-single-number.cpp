class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        int a = 0;
        for(auto x:m){
            if(x.second==1)
                a = x.first;
        }
        return a;
    }
};