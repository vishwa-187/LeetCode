class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto i:m){
            if(i.first == 0){
                for(int j =0;j<i.second;j++)
                    nums.push_back(0);
            }
            else if(i.first == 1){
                for(int j =0;j<i.second;j++)
                    nums.push_back(1);
            }
            else if(i.first == 2){
                for(int j =0;j<i.second;j++)
                    nums.push_back(2);
            }
        }
        
        
        
    }
};