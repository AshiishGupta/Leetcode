class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if((sum-(2*curr))==nums[i]){
                return i;
            }
            curr+=nums[i];
        }
        return -1;
    }
};