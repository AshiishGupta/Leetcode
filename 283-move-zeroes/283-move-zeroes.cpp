class Solution {
public:
    // BRUTE FORCE TWO POINTER
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=0,j=1;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    }
};