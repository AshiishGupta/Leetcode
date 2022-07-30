class Solution {
public:
    // TWO POINTER APPROACH
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=nums.size()-1;
        vector<int> ans(n);
        int k=n-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[k--]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[k--]=nums[right]*nums[right];
                right--;
            }
        }
        return ans;
    }
};