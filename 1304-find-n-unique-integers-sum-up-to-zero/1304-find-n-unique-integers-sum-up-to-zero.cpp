class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        if(n==1)
            ans.push_back(0);
        else{
            if(n%2==0){
                for(int i  = 1;i<=n/2;i++){
                    ans.push_back(i);
                    ans.push_back(-1*i);
                }
                
            }
            else{
                int y = (n-1)/2;
                for(int i =1;i<=y;i++){
                    ans.push_back(i);
                    ans.push_back(-1*i);
                }
                ans.push_back(0);
            }
        }
        
        return ans;
        
    }
};