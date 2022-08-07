class Solution {
public:
    
    int first(vector<int> &nums,int l,int r,int target){
        int ans=-1;
        int mid=l+(r-l)/2;
        
        while(l<=r){
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
            mid=l+(r-l)/2;
        }               
        return ans;        
    }
    int last(vector<int> &nums,int l,int r,int target){
        int ans=-1;
        int mid=l+(r-l)/2;
        
        while(l<=r){
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            mid=l+(r-l)/2;
        }               
        return ans;        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int l=0,r=nums.size()-1;
        ans.push_back(first(nums,l,r,target));
        ans.push_back(last(nums,l,r,target));
        return ans;
    }
};