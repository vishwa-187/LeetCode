class Solution {
public:
    bool isPathCrossing(string path) {
       int x = 0;
        int y = 0;
        bool b = false;
        set<pair<int,int>> p;
        p.insert({0,0});
        for(int i = 0;i<path.length();i++){
            if(path[i]=='N')
                y++;
            else if(path[i]=='S')
                y--;
            else if(path[i]=='E')
                x++;
            else if(path[i]=='W')
                x--;
            
            if(p.count({x,y})>0)
                b = true;
           p.insert({x,y}); 
            
        }
        
        return b;
            
    }
};