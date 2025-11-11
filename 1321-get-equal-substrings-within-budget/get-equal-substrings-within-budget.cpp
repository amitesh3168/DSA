class Solution {
public: 
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int start  = 0;
        int end = 0;
        int cost   =0;
        int max_length = 0;
        while(end<n){
            cost += abs(s[end]-t[end]);
            while(cost>maxCost){
                cost-=abs(s[start]-t[start]);
                start++;
            }
            
            max_length=max(max_length,end-start+1);
end++;

        }
        return max_length;
    }
};