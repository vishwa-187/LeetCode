class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[1] - arr[0];
        int n = arr.size();
        bool b = false;
        for(int i = 1;i<n;i++){
          if((arr[i]-arr[i-1]) == d)
              b = true;
        
        else{
            b = false;
            break;
        }
    }
        return b;
    }
};