class Solution {
public:
    // USING HASHMAP or we can use set and check size of set if it is less than nums return true else false
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();i++){
            if(hashmap.find(nums[i]) == hashmap.end()){
                hashmap[nums[i]]++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};