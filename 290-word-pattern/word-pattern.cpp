class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>mpp;
        int idx = 0;
        string baby = "";
        for(int i = 0;i<=s.size();i++){
           if(i==s.size() || s[i]==' '){
                if(idx >=pattern.size()) return false;
                char ye =  pattern[idx];
                if(mp.count(ye) && mp[ye]!=baby){
                    return 0;
                }
                if(mpp.count(baby) && mpp[baby]!=ye){
                    return 0;
                }
                mp[ye ] =baby;
                mpp[baby]= ye;
                idx++;
                baby="";
           }else{
            baby+=s[i];
           }
           }
        return (idx==pattern.size());
    }
};