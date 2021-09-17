class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n= arr.size();
        map<int , int> m;
        bool b = true;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
//         for(int i=0;i< m.size() ;i++){
//             for(int j = 0;j<m.size();j++)
//                 if(m[arr[i]] == m[arr[j]] && arr[i]!=arr[j] && i!=j )
//                 {
//                     b = false;
//                     break;
//                 }
             
//         }
        map<int, int> m2;
        for( auto x:m){
            m2[x.second]++;
        }
        for(auto x2:m2){
            if(x2.second != 1)
                b = false;
        }
        
        
        
        
        
        return b;
        
        
    }
};