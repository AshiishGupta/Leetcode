class Solution {
public:
        // RECURSIVELY
    void solve(vector<string> &ans,string temp,string s,int index){
        // BASE CASE
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        
        if(isdigit(s[index])){
            temp.push_back(s[index]);
            solve(ans,temp,s,index+1);
        }
        else{
            string curr1=temp;
            curr1.push_back(tolower(s[index]));
            solve(ans,curr1,s,index+1);
            
            string curr2=temp;
            curr2.push_back(toupper(s[index]));
            solve(ans,curr2,s,index+1);
            
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(ans,"",s,0);
        
        return ans;
    }
};