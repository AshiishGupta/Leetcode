class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // BRUTE FORCE TWO LOOPS o(n^2) AND XOR METHOD O(n)
        
        int n=nums.size();
        int xorans=0;
        for(int i=0;i<n;i++){
            xorans=xorans^nums[i];
        }
        return xorans;
    }
};