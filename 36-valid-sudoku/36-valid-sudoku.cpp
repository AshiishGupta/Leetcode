class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9),col(9),blocks(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int temp=board[i][j]-'0';
                
                if(board[i][j]=='.') continue;
                
                if(row[i].count(temp) || col[j].count(temp) || blocks[i/3*3+j/3].count(temp)){
                    return false;
                }
                row[i].insert(temp);
                col[j].insert(temp);
                blocks[i/3*3+j/3].insert(temp);
                
            }
        }
        return true;
    }
};