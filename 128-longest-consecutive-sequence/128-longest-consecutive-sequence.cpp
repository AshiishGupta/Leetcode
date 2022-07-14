class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0){
            return 0;
        }
        
        int prev=nums[0];
        int ans=1;
        int currans=1;
        for(int i=1;i<n;i++){
            if(nums[i]==prev+1){
                currans++;
            }
            else if(nums[i]!=prev){
                currans=1;
            }
            prev=nums[i];
            ans=max(ans,currans);
        }
        return ans;
    }
};