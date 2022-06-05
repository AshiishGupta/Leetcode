class Solution {
public:
    // 2 POINTER APPROACH
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        if(needle==""){
            return 0;
        }
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()){
                    return i-needle.size();
                }
                
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        return -1;
    }
};