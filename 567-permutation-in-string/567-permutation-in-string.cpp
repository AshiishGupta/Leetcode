class Solution {
public:
    // SLIDING WINDOW TECHNIQUE
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> s1hash(26,0),s2hash(26,0);
        
        int left=0,right=0;
        while(right<s1.size()){
            s1hash[s1[right]-'a']+=1;
            s2hash[s2[right]-'a']+=1;
            right++;
        }
        if(s1hash==s2hash) return true;
        right--;
        while(right<s2.size()){
            right++;
            if(s1hash==s2hash) return true;
            if(right!=s2.size())s2hash[s2[right]-'a']++;
            s2hash[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};