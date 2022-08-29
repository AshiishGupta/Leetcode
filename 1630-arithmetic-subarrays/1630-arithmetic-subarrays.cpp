class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        
        for(int i=0;i<l.size();i++){
            
            if(r[i]-l[i]<2) {
                ans.push_back(true);
            }
            else{
                
                vector<int> temp(nums.begin()+l[i],nums.begin()+r[i]+1);
                bool flag=false;
                sort(temp.begin(),temp.end());
                int diff=temp[1]-temp[0];
                for(int j=2;j<=r[i]-l[i];j++){
                    if(temp[j]-temp[j-1]!=diff){
                        flag=true;
                        break;
                    }
                }
                ans.push_back(!flag);
            }
        }

        return ans;
        
    }
};