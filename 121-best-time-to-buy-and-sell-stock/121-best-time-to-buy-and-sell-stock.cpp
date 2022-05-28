class Solution {
public:
    int maxProfit(vector<int>& arr) {
      // int ans = 0;
      //   int d = 0;
       int n = arr.size();
      //   for(int i = 0;i<n;i++){
      //       for(int j = i+1;j<n;j++){
      //           d = arr[j]-arr[i];
      //           ans = max(ans,d);
      //       }
      //   }
      //   return ans;
        
        int temp = 0;
        int min = arr[0];
        int d ;
        for(int i = 1;i<n;i++){
            if(arr[i]<min)
                min = arr[i];
            d = arr[i]-min;
            if(d>temp)
                temp = d;
        }
        return temp;
    }
};