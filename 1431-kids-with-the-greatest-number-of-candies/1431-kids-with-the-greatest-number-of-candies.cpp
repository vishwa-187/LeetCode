class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ext) {
        int n= candies.size();
        vector<bool> ans(n);
        int temp= candies[0];
        for( int i =0;i<n;i++){
            if(candies[i]>temp)
                temp = candies[i];
        }
        for( int i =0;i<n;i++){
            if( candies[i]+ext >= temp){
                ans[i] = true;
            }
            else{
                ans[i] = false;
            }
        }
        
        return ans;
        
    }
};