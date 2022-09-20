class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxi=0;
        int left=-1;
        int right=-1;
        int empty=0;
        int n=seats.size();
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                empty=0;
                if(left==-1) left=i;
                right=i;
            }
            else{
                empty++;
                maxi=max(maxi,(empty+1)/2);
            }
        }
        maxi=max({maxi,left,n-1-right});
        
        return maxi;
    }
};