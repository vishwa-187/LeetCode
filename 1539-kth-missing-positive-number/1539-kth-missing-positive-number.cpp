class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
//         vector<int> h ;
//         bool b = true;
//         int n = arr.size();
//         for(long long int i = 0 ;i<10000000000;i++){
//             if(find(arr.begin(),arr.end(),i)!= arr.end()){
//                 b = true;
//             }
//             else{
//                 b = false;
//             }
            
//             if(b==false){
//                 h.push_back(i);
//             }
//         }
        
//         return h[k];
        for(int i = 0; i < arr.size(); i++)
		{
			if(arr[i] <= k)
				k++;
		}
    
       return k;
        
    }
};