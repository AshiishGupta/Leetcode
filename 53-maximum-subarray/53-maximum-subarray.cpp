class Solution {
public:
    // DIVIDE AND CONQUER METHOD
    int subarray(int arr[],int n){
        
        if(n==1){
            return arr[0];
        }
        int mid=n/2;
        int left_mss=subarray(arr,mid);
        
        int right_mss=subarray(arr+mid,n-mid);
        
        int leftsum=INT_MIN,rightsum=INT_MIN,ans=0;
        int sum=0;
        
        for(int i=mid-1;i>=0;i--){
            sum+=arr[i];
            leftsum=max(sum,leftsum);
            
        }
        
        sum=0;
        for(int i=mid;i<n;i++){
            sum+=arr[i];
            rightsum=max(sum,rightsum);
        }
        
        ans=max(left_mss,right_mss);
        
        return max(ans,leftsum+rightsum);     
                
    }
    
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
        return subarray(arr,n);
    }
};