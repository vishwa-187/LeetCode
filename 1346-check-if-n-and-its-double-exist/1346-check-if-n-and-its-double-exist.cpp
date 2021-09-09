class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool f= false;
        for(int i =0;i<n-1;i++){
            if(arr[i]==arr[i+1] && arr[i]==0)
                f = true;
        }
        for( int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[j] == 2*arr[i] && arr[i]!=arr[j]){
                    f= true;
                    break;
                    
                }
               
                   
            }
        }
        return f;
        
    }
};