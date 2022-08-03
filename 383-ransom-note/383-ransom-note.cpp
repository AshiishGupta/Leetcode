class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(auto i:magazine){
            m[i]++;
        }
        int count=0;
        for(int i=0;i<ransomNote.length();i++){
            if(m.find(ransomNote[i]) != m.end() && m[ransomNote[i]]>0){
                count++;
                m[ransomNote[i]]--;
            }
        }
        if(count==ransomNote.length()){
            return true;
        }
        else return false;
    }
};