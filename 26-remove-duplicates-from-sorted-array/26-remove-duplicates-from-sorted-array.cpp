class Solution {
public:
    // TWO POINTER APPROACH
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=0,ans=1;
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
                ans++;
            }
        }
        return ans;
    }
};