class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> m;
        for(auto i:t){
            m[i]++;
        }
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) != m.end() && m[s[i]]>0){
                cnt++;
                m[s[i]]--;
            }
        }
        return cnt==s.length();
    }
};