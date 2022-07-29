class Solution {
public: 
    // WE are returning low cause if we have only one element in nums then it would be good ,take example to understand (NEETCODE)
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            
        }
        return low;
    }
};