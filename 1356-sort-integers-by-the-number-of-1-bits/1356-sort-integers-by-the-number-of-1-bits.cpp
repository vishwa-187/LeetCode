  bool comp(const int &a, const int &b){
    int x=__builtin_popcount(a), y=__builtin_popcount(b);
    if(x==y)
        return a<b;
    return x<y;
  }
class Solution {
public:
    // int intToBin(int n){
    //     int bin[10];
    //     int len = sizeof(bin)/sizeof(bin[0]);
    //     int count = 0;
    //     int i = 0;
    //     while(n>0){
    //         bin[i] = n%2;
    //         n = n/2;
    //         i++;
    //     }
    //     for(int j = 0;j<len;j++){
    //         if(bin[i]==1){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    
  

    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),comp);
        return arr;
        
    }
};