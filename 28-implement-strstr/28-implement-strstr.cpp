class Solution {
public:
    // 2 pointer approach THINK OF START INDEX IN HAYSTACK 
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        if(!needle.size()) return 0; 
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()){
                    return i-j;
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