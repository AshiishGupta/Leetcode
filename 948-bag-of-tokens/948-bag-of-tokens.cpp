class Solution {
public:
    // TWO POINTER + GREEDY APPROACH 
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0,j=tokens.size()-1,p=power,ans=0,point=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            if(p>=tokens[i]){
                p-=tokens[i];
                i++;
                ans=max(ans,++point);
            }
            else if(point>0){
                point--;
                p+=tokens[j--];
            }
            else break;
        }
        return ans;
    }
};