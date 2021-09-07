class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0){
            return 0;
        }
        int steps = 0;
        while(num !=1){
            if(num%2==0){
                steps++;
                num = num/2;
                
            }
            else{
                num = num -1;
                steps++;
                
                num = num/2;
                steps++;
            }
        }
        
        return (steps+1);
        
    }
};