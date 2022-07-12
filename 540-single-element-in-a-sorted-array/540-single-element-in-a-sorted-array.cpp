class Solution {
public:
//     We are finding that break point where no. is single nd from that point we are dividing the arr into two halves left and right, 
//     And intuition and logic here is , If 1st instance of no. is at even then it is in left part. Similarly If 1st instance of no. is at odd place then it is right part.
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-2,mid;
        
        while(low<=high){
            mid=(low+high)>>1; // Right shifting any no. by 1 means dividing it by 2
            if(nums[mid]==nums[mid^1]){ //xor with one give you 1less than no. if no. is odd and one greater if no. is even
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return nums[low];
        
    }
};