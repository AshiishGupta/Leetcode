class Solution {
public:
    
    // t(C)=o(n)
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,len=0;
        vector<int> mpp(256,-1);
        while(r<s.length()){
            if(mpp[s[r]] != -1) l=max(l,mpp[s[r]]+1);
            
            mpp[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;        
    }
};