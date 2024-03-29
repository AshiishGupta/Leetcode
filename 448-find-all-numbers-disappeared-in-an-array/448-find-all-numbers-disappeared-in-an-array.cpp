class Solution {
public:
    // CONSTANT SPACE
    // We are using 1-n thing that is we are checking in entire array with help of  that and marking it negative 
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=abs(nums[i]);
            if(nums[n-1]>0){
                nums[n-1]=-nums[n-1]; // marking it negative
            }
        }
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};