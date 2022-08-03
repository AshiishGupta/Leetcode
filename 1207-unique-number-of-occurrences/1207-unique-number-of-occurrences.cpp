class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m1,m2;
        for(auto x: arr){
            m1[x]++;
        }
        bool ans=true;
        for(auto x:m1){
            m2[x.second]++;
            if(m2[x.second]>1){
                ans=false;
                return ans;
            }
        }
        return ans;
    }
};