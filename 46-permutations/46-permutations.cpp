class Solution {
public:
    // APPROACH-2 (SWAPPING ELEMENTS)
//     void recurpermute(int index,vector<int> &nums, vector<vector<int>> &ans){
//         if(index==nums.size()){
//             ans.push_back(nums);
//             return ;
//         }
//         for(int i=index;i<nums.size();i++){
//             swap(nums[index],nums[i]);
//             recurpermute(index+1,nums,ans);
//             swap(nums[index],nums[i]);
//         }
        
//     }
    
    // FREQUENCY ARRAY TECHNIQUE
    void recurpermute(vector<vector<int>> &ans,vector<int> &ds,int freq[],vector<int>&nums){
        // BASE CASE
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                recurpermute(ans,ds,freq,nums);
                freq[i]=0;
                ds.pop_back();
            }
        }
        
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        recurpermute(ans,ds,freq,nums);
        return ans;
        
        
        // vector<vector<int>> ans;
        // recurpermute(0,nums,ans);
        // return ans;
    }
};