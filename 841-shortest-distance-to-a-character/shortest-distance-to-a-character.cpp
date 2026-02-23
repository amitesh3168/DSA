class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n  = s.size();
        vector<int>ans(n, INT_MAX);
        
        vector<int>v;

        for(int i = 0;i<n;i++){
            if(s[i]==c){
               v.push_back(i); 
                
            }
        }
       int idx =0;
     while(idx<n){
        int mini =INT_MAX;
       for(int i:v){
         mini = min(mini, abs(idx-i));
       }
       ans[idx] =mini;
       idx++;

    }
        return ans;
    }
};