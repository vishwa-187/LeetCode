class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int ans =1;
        int count = 1;
        int n =nums.size();
            sort(nums.begin(),nums.end());
        if(n==0)
            return 0;
        vector<int>::iterator ip;
  
    // Using std::unique
    ip = std::unique(nums.begin(), nums.begin() +n);
    
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    nums.resize(std::distance(nums.begin(), ip));
        n =nums.size();
        int k=nums[0];
        if(n==1)
            return 1;
        
        for(int i = 0;i<n;i++){
            if(nums[i]==++k){
                count++;
                 ans = max(ans,count);
            }
                
            else{
               count = 1;
                k= nums[i];
            }
                
           
        }
        cout<<n;
        return ans;
    }
};