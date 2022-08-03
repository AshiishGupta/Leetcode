class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans,freq(n+1,0);
        
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};