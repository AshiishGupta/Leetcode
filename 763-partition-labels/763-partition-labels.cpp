class Solution {
public:
    vector<int> partitionLabels(string s) {
        int occ[26]={0};
        for(int i=0;i<s.size();i++){
            occ[s[i]-'a']=i;
        }
        vector<int> ans;
        int st=0,e=0;
        for(int i=0;i<s.size();i++){
            if(e<occ[s[i]-'a'])
                e=occ[s[i]-'a'];
            if(i==e){
                ans.push_back(i-st+1);
                st=i+1;
            }
            
        }
        return ans;
    }
};