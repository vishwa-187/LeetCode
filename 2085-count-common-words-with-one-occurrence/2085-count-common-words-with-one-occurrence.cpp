class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
      map<string,int> m1;
        map<string,int> m2;
        int ans= 0;
        int n = words1.size();
        int m = words2.size();
        for(int i = 0;i<n;i++)
            m1[words1[i]]++;
        for(int i = 0;i<m;i++)
            m2[words2[i]]++;
        for(auto i:m1){
            for(auto j:m2){
                if(i.first == j.first && i.second == 1 && j.second==1)
                    ans++;
            }
        }
        return ans;
    }
};