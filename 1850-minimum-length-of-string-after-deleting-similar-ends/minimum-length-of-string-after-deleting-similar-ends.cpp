class Solution {
public:
    int minimumLength(string s) {
       int st =0;

       int e = s.size()-1;
        while(st<e){

            if(s[st]==s[e] ){
                while(st<e&&s[e-1]==s[e] ){
                    e--;
                }
             
                while(st<e&&s[st+1]==s[st] ){
                    st++;
                }
              
                st++, e--;

            }else{
                break;
            }

        }
        int cnt = e-st+1;
        if(cnt<0) return 0;
        return cnt;
    }
};