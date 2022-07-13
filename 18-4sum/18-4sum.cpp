class Solution {
public:
    // In the previous approach we fixed three-pointers and did a binary search to find the fourth. Over here we will fix two-pointers and then find the remaining two elements using two pointer technique as the array will be sorted at first.
    #define ll long  long
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            ll target_3=target-nums[i];
            for(int j=i+1;j<n;j++){
                ll target_2=target_3-nums[j];
                
                int front=j+1;
                int back=n-1;
                while(front<back){                
                    ll two_sum=nums[front]+nums[back];
                    if(two_sum<target_2){
                        front++;
                    }
                    else if(two_sum>target_2){
                        back--;
                    }
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        res.push_back(quad);
                        
                        // PROCESSING THE DUPLICATES FOR NO. 3
                        while(front<back && nums[front]==quad[2]) ++front;
                        
                        // PROCESSING THE DUPLICATES FOR NO. 4
                        while(front<back && nums[back]==quad[3]) --back;
                        
                    }
                }
                // PROCESSING THE DUPLICATES FOR NO. 2
                while(j+1<n && nums[j]==nums[j+1]) ++j;
            }
            
            // PROCESSING THE DUPLICATES FOR NO. 2
            while(i+1<n && nums[i]==nums[i+1]) ++i;
        }
        
        return res;
    }
};