class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int d = int(target);
        int n= letters.size();
        char ans = letters[0];
        for(int i =0;i<n;i++){
            if(int(letters[i])>d){
                ans = letters[i];
                break;
            }
                
        }
        return ans;
    }
};