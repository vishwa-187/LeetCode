class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        int temp =0;
        for(auto w:m){
            if(w.second>temp)
                temp = w.second;
            
        }
        int k ;
        for(auto w:m){
            if(w.second == temp)
               k = w.first;
        }
        return k;
    }
};