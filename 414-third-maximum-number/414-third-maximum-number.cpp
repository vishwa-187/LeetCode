class Solution {
public:
    int thirdMax(vector<int>& v) {
        
//        vector<int>::iterator ip;
//   int n = v.size();
   
//     ip = std::unique(v.begin(), v.begin() + n);
     vector<int>::iterator ip;
  
//     v.resize(std::distance(v.begin(), ip));
         std::sort(v.begin(), v.end());
    // Now v becomes 1 1 2 2 3 3 3 3 7 7 8 10
  
    // Using std::unique
    ip = std::unique(v.begin(), v.begin() + v.size());
    // Now v becomes {1 2 3 7 8 10 * * * * * *}
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    v.resize(std::distance(v.begin(), ip));
               // cout<< v.size();

        if(v.size()<3){
            return *max_element(v.begin(), v.end());
        }
        else{
            sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v[2];
        }
        
    
    }
};