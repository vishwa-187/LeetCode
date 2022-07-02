class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& verti) {
        
        hori.push_back(h);
        verti.push_back(w);
        int n= hori.size();
        int m=verti.size();
        sort(hori.begin(),hori.end());
        sort(verti.begin(),verti.end());
        int a = hori[0];
        for(int i = 1;i<n;i++){
            a = max(a,hori[i]-hori[i-1]);
        }
        int b = verti[0];
        for(int i = 1;i<m;i++)
            b= max(b,verti[i]-verti[i-1]);
        return (1LL*a*b) % 1000000007;
        
    }
};