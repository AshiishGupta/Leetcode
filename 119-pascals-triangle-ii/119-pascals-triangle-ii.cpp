class Solution {
public:
    long double fact(int n){
        if(n<2) return 1;
        return n*fact(n-1);
    }
        
    vector<int> getRow(int rowIndex) {
        
        // nCr APPROACH
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(double((fact(rowIndex)/(fact(i)*(fact(rowIndex-i))))));
        }
        return ans;
        
        // ITERATIVE APPROACH
        // vector<int> curr={1},prev={1};
        // for(int i=1;i<=rowIndex;i++){
        //     curr.push_back(1);
        //     for(int j=1;j<i;j++){
        //         curr[j]=prev[j]+prev[j-1];
        //     }
        //     prev=curr;
        // }
        // return curr;
        
        
        // RECURSIVE APPROACH
       
//         if(rowIndex==0) return {1};
//         vector<int> currRow={1};
//         vector<int> prevRow=getRow(rowIndex-1);
        
//         for(int i=1;i<rowIndex;i++){
//             currRow.push_back(prevRow[i]+prevRow[i-1]);
//         }
//         currRow.push_back(1);
//         return currRow;
        
        
    }
};