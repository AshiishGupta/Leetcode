class Solution {
public:
    // BRUTE FORCE TWO POINTERS
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        vector<int> ans;
        while(j>i){
            if(numbers[i]+numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(numbers[i]+numbers[j] > target){
                j--;
            }
            else if(numbers[i]+numbers[j] < target){
                i++;
            }
        }
        return ans;
    }
};