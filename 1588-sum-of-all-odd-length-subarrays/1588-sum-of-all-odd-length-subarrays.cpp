class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for( int i = 0;i<n;i++){
            for( int j = 0;j < n;j++){
                if( (j - i)%2==0){
                    for(int k = i;k<=j;k++)
                        sum = sum + arr[k];
                    
                }
            }
        }
        return sum;
    }
};