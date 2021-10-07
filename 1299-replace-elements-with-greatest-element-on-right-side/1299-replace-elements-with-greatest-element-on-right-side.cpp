class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       
        int n = arr.size();
        if(n == 1)
            arr[0] = -1;
        else{
                   int temp ;
        for(int i = 0 ;i<n;i++){
            temp = arr[i+1];
            for(int j = i+1;j<n;j++){
                if(arr[j]>temp)
                    temp = arr[j];
                
            }
            arr[i] = temp;
        }
        
        arr[n-1] = -1;
        }
 
        return arr;
        
    }
};