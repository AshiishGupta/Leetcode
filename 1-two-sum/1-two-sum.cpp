class Solution {
public:
    // HASHMAP SOLUTION
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     hashmap[nums[i]]++;
        // }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(hashmap.find(temp) != hashmap.end()){
                ans.push_back(hashmap[temp]);
                ans.push_back(i);
            }
            else{
                hashmap[nums[i]]=i;
            }
        }
        return ans;
    }
};