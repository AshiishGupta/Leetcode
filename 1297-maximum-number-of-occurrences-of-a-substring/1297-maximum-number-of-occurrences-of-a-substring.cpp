class Solution {
public:
    bool isvalid(string s,int maxLetters){
        bool flag=true;
        int arr[26]={0};
        
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
    
        int j=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                j++;
            }
        }
        if(j>maxLetters){
            flag=false;
        }
        return flag;
    }
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int ans=0;
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<s.size()-minSize+1;i++){
            string temp = s.substr(i,minSize);
            // cout<<temp<<endl;
            if(isvalid(temp,maxLetters)){
                mp[s.substr(i,minSize)]++;}
            else{
                continue;
            }
        }
        for(auto i:mp){
            ans=max(ans,i.second);
        }
        
        return ans;
    }
};