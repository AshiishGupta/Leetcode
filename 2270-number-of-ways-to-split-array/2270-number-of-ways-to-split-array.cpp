class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long curr=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            curr+=nums[i];
            if((sum-curr)<=curr){
                ans++;
            }
        }
        return ans;
    }
};