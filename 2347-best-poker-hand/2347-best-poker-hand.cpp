class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> rank;
        unordered_map<int,int> suit;
        for(int i=0;i<ranks.size();i++){
            rank[ranks[i]]++;
            suit[suits[i]-'a']++;
        }
        int three=0,pair_=0;
        for(int i=0;i<ranks.size();i++){
            if(suit[suits[i]-'a']>4){
                return "Flush";
            }
            else if(rank[ranks[i]]>2){
                three=1;
            }
            else if(rank[ranks[i]]>1){
                pair_=1;
            }
            
        }
        if(three) return "Three of a Kind";
        else if(pair_) return "Pair";
        else return "High Card";
        
    }
};