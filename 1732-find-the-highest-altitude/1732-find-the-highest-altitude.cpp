class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        vector<int> high(n+1);
        high[0]=0;
        
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum + gain[i];
            high[i+1] = sum;
            
        }
        int temp = high[0];
        for(int i = 0;i<n+1;i++){
            if(temp<high[i])
                temp = high[i];
        }
        return temp;
    }
};