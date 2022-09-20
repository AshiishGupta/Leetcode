class Solution {
public: 
    // SLIDING WINDOW TECHNIQUE
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int maxi=0;
        for(int i=-n+1;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(i+j<0){
                    continue;
                }
                else if(i+j>=m) break;
                else if(nums1[i+j]==nums2[j]) {
                    cnt++;
                    maxi=max(maxi,cnt);
                }
                else{
                    cnt=0;
                }
            }
        }
        
        
        return maxi;
        
        
    }
};