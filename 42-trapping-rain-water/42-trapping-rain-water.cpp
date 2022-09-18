class Solution {
public:
    // BRUTE BETTER APPROACH0
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pre(n),suf(n);
        int mini=0,maxi=0;
        for(int i=0;i<n;i++){
            if(height[i]>mini){
                mini=height[i];
            }
            pre[i]=mini;
        }
        for(int i=n-1;i>=0;i--){
            if(height[i]>maxi){
                maxi=height[i];
            }
            suf[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(min(pre[i],suf[i])-height[i]);
        }
        return ans;
    }
};