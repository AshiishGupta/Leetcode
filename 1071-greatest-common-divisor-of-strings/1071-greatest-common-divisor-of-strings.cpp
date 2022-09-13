class Solution {
public:
    int gcd(int a,int b){
        if (b == 0) return a;
        return gcd(b, a % b);

    }
    string gcdOfStrings(string str1, string str2) {
        string ans="";
        if(str1+str2!=str2+str1) return "";
        else{
            ans=str1.substr(0,gcd(str1.size(),str2.size()));
        }
        return ans;
    }
};