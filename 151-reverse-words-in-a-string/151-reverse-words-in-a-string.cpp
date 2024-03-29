class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') continue;
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word+=s[i];
                i++;
            }
            st.push(word);
        }
        string ans;
        while(!st.empty()){
            ans+=st.top()+' ';
            st.pop();
        }
        ans.erase(ans.end()-1,ans.end());
        return ans;
    }
};