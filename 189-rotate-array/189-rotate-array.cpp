class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        
        nums=temp;
        
        // REVERSE TECHNIQUE
//         int n=nums.size();
//         k=k%n;
        
//         reverse(nums.begin(),nums.begin()+n-k);
//         reverse(nums.begin()+n-k,nums.end());
//         reverse(nums.begin(),nums.end());
    }
};