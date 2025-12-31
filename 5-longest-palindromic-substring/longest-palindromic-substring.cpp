class Solution {
public:
bool checkpalindrome(string & result){
    int s=0;
    int e = result.size()-1;
    while(s<e){
        if(result[s]!=result[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            string result="";
            for(int j=i;j<n;j++){
                result+=s[j];
               
                if(checkpalindrome(result)){
                    if(result.size()>ans.size()){
                        ans=result;
                    }
                }
            }
        }
        return ans;

    }
};