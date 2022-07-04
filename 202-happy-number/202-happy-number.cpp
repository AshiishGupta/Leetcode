class Solution {
public:
    // Any chain arrives at 1 or 89 it will stuck in endless loop
    int squareSum(int n){
        int sum=0;
        while(n>0){
            sum=sum+((n%10)*(n%10));
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
       int temp=n;
        while(1){
            if(temp==1){
                return true;
            }
            if(temp==89){
                return false;
            }
            temp=squareSum(temp);
        }
        
    }
};