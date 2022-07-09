class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int pro=INT_MIN;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            pro=max(pro,prices[i]-mini);
        }
        return pro;
    }
};