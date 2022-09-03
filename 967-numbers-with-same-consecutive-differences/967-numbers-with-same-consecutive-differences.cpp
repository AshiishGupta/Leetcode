class Solution {
public:
    void buildnum(int num,int n,int k,int len,set<int> &temp){
        
        if(len>=n){
            temp.insert(num);
            return;
        }
        if(num%10+k <=9) buildnum((num*10)+(num%10)+k,n,k,len+1,temp);
        if(num%10-k >=0) buildnum((num*10)+(num%10)-k,n,k,len+1,temp);
        
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        set<int> temp;
        for(int i=1;i<=9;i++){
            buildnum(i,n,k,1,temp);
        }
        
        for(auto i:temp){
            ans.push_back(i);
        }
        
        return ans;
    }
};