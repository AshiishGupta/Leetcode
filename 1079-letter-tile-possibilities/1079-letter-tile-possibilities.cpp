class Solution {
public:
    // BACKTRACKING || SIMILAR TO PERMUTATION || DRY RUN TO UNDERSTAND
    void backtrack(string tiles,int level,int &count){
        count++;
        
        for(int i=level;i<tiles.length();i++){
            if(i!=level && tiles[i]==tiles[level]) continue;
            
            swap(tiles[level],tiles[i]);
            backtrack(tiles,level+1,count);
        }
    }
    
    int numTilePossibilities(string tiles) {
        int count=-1;
        sort(tiles.begin(),tiles.end());
        
        backtrack(tiles,0,count);
        return count;
    }
};