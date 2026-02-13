class Solution {
public:
        int dp[101];
    int decodekardunga(string& s, int i, int &n){
        if(i>=n) return 1;
        if(dp[i]!=-1) return dp[i];
        if(s[i]=='0') return 0;
        int first = decodekardunga(s,i+1,n);
        int second = 0;
        if( i+1<n && (s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))){
            second =  decodekardunga(s,i+2,n);
        }
        return dp[i]=first+second;
         }
    int numDecodings(string s) {
        int  n = s.size();
        memset(dp, -1, sizeof(dp));
        return decodekardunga(s,0,n);
    }
};