class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        bool b = true;
        sort(arr.begin(),arr.end());
        if(n==2)
            b= true;
        else{
            int h = arr[1]-arr[0];
            for(int i = 1;i<n;i++){
                if(h!= (arr[i] - arr[i-1])){
                     b = false;
                    break;
                }
                   
                    
            }
        }
        return b;
    }
};