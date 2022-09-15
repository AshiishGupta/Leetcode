class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2) return {};
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto i:changed){
            mp[i]++;
        }
        sort(changed.begin(),changed.end());
        
        for(int i=0;i<n;i++){
            if(mp[changed[i]]==0) continue;
            if(mp[changed[i]*2]==0) return {};
            if(mp[changed[i]] && mp[changed[i]*2]) {
                ans.push_back(changed[i]);
                mp[changed[i]*2]--;
                mp[changed[i]]--;
            }
        }
        return ans;
    }
};