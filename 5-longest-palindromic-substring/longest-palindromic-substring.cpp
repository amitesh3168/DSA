class Solution {
public:
     bool check(string& res){
        if(res.size()==1) return 1;
        int s= 0;
        int e =res.size()-1;
        while(s<e){
            if(res[s]!=res[e]){
                return 0;
            }
            s++, e--;
        }
        return 1;
     }
    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        string ans ="";
        int length = 0;
        for(int i =0;i<s.size();i++){
                string res = "";
                
            for(int j=i;j<s.size();j++){            
                res+=s[j];
                if(check(res)){
                    if(res.size()>length){
                        ans =res;
                        length =res.size();
                    }
                }

            }
        }
        return ans;
    }
};