class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans;
        map<int,int> m;
        for(int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto i :m){
            if(i.second > n/4){
                ans = i.first;
                
            }
        }
        return ans;
    }
};