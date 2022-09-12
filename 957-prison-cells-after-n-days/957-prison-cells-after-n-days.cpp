class Solution {
public:
    
    // LOGIC HERE IS : AFTER SOME CHANGES THERE WILL BE STATE WHEN REPETITION STARTS SO WE ARE MAINTAINING EVERY DAY VECTOR
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int> temp(8);
        vector<vector<int>> seen;
        
        while(n--){
            
            for(int i=1;i<7;i++){
                if(cells[i-1]==cells[i+1]){
                    temp[i]=1;
                }
                else{
                    temp[i]=0;
                }
            }
            
            if(seen.size() && seen.front()==temp) return seen[n%seen.size()];
            else seen.push_back(temp);
            cells=temp;            
        }
        return cells;
    }
};