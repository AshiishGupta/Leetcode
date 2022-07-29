class Solution {
public: 
    // HASHMAP BRUTEFORCE
    bool isIsomorphic(string s, string t) {
        int i=0;
        unordered_map<char,char> m;
        unordered_map<char,bool> mark;
        
        while(i<s.size()){
            if(m.find(s[i]) ==m.end() && mark[t[i]]==false){
                m[s[i]]=t[i];
                mark[t[i]]=true;
            }
            else{
                if(m[s[i]]==t[i]){
                    i++;
                }
                else{
                    break;
                }
            }
            
        }
        if(i==s.size()){
            return true;
        }
        
        return false;
    }
};