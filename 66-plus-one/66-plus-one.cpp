class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n=digits.size();
        int temp=digits[n-1]+1;
        
        if(temp>9){
            digits[n-1]=temp%10;
            carry=temp/10;
        }
        else{
            digits[n-1]=temp;
        }
        
        
        for(int i=n-2;i>=0;i--){
            
            if(carry!=0){
                int x=(digits[i]+carry);
                digits[i]=x%10;
                carry=x/10;
            }
            
        }
        if(carry!=0){
            digits.push_back(0);
            digits[0]+=1;
        }
        return digits;
    }
};