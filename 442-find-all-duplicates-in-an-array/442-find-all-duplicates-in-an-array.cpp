class Solution {
public:
    // CONSTANT SPACE we can solve using hashtable also
    // We are using 1-n thing that is we are checking in entire array with help of  that and marking it negative 
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int temp=abs(nums[i]);
            if(nums[temp-1]<0){
                ans.push_back(temp);
            }
            nums[temp-1]=-nums[temp-1];
        }
        
        return ans;
    }
};