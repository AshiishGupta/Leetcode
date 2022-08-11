class Solution {
public:
    // try to solve by yourself you know logic HINT--use left and right shift operator
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0,place=31;
        for(int i=0;i<32;i++){
            ans+=(n&1)<<place;
            n=n>>1;
            place--;
        }
        return ans;
    }
};