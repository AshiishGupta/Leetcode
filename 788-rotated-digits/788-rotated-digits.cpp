class Solution {
public:

    
    int rotatedDigits(int N) {
        int ans=0;
        for(int i=0;i<=N;i++){
            int j=i,count=0;
            while(j>0){
                int t=j%10;
                if(t==3||t==7||t==4){count=0;
                                    break;}
                else if(t==2||t==5||t==6||t==9){count=1;}
                
                j=j/10;
                }
            if(count==1){ans++;}
            
        }
       return ans;
    }
};