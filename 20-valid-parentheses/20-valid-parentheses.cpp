class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        int i=0;
        while(i<n){
            
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' ){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char ch=st.top();
                st.pop();
                if((ch=='(' && s[i]==')') || (ch=='[' && s[i]==']')|| (ch=='{' && s[i]=='}' )){
                    i++;
                    continue;
                }
                else{
                    return false;
                }
            }
            i++;
        }
        if(st.empty()) return true;
        else return false;
    }
};