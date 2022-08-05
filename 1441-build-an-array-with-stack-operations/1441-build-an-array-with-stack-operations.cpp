class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        string a="Push";
        string b="Pop";
        int num=1;
        for(int i=0;i<target.size();i++){
            while(num!=target[i]){
                num++;
                ans.push_back(a);
                ans.push_back(b);
                
            }
            num++;
            ans.push_back(a);         
        }
        
        return ans;
    }
};