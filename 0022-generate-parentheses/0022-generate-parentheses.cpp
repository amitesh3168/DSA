class Solution {

public:
void generate(int o, int c, vector<string>& ans, string res){
    if (o==0&&c==0){
        ans.push_back(res);
        return;
    }
   if(o>0){
    generate(o-1,c,ans,res+'(');
   }
   if(c>o){
    generate(o,c-1,ans,res+')');
   }
   
}
    vector<string> generateParenthesis(int n) {
        int o=n;
        int c= n;
        vector<string> ans;
        generate(o,c,ans,"");
        return ans;
    }
};
