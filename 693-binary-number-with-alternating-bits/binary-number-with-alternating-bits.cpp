class Solution {
public:
    string dectobin(int n){
        if(n==0) return "0";
        string ans="";
        while(n>0){
            ans +=( n%2 )+ '0';
            n/=2;
        }
        reverse(ans.begin(), ans.end());
        return ans;      
    }
    bool hasAlternatingBits(int n) {
        string s = dectobin(n);
        int ni  = s.size();
       for(int i =0;i<ni-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
        }
        return true;
    }
};