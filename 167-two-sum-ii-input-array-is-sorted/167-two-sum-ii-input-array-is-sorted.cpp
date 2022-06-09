class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> ans;
//         int n = nu.size();
//         int j = 0;
        
//         for( int i=0;i<n ;i++){
//             if(nu[i]+nu[j]==target){
                
//                 ans.push_back(i+1);
//                 ans.push_back(j+1);
                
//                 break;
//             }
//             j++;
            
            
//         }
//         return ans;
        
        int s = 0;
        int e = numbers.size() - 1;
        
        while(s <= e)
        {
            if(numbers[s] + numbers[e] == target)
                return {s + 1, e + 1};
            else if(numbers[s] + numbers[e] > target)
                e--;
            else
                s++;
        }
        
        return {};
        
    }
};





