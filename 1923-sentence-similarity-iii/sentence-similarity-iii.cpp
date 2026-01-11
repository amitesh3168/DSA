class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string>s1;
        vector<string>s2;
        string ans ="";
        for(auto it: sentence1){
            if(it==' '){
                s1.push_back(ans);
                ans="";
            }else{
                ans +=it;
            }
        }
        s1.push_back(ans);

        ans ="";
         for(auto it: sentence2){
            if(it==' '){
                s2.push_back(ans);
                ans="";
            }else{
                ans +=it;
            }
        }
        s2.push_back(ans);
        int  first= s1.size();
        int second = s2.size();

        int left1 =0;
        int right1 = first-1;
        int left2 = 0;
        int right2 = second-1;

        while(left1<first && left2<second && s1[left1]==s2[left2]){
            left1++;
            left2++;
        }
        while(right1>=0 && right2>=0 && s1[right1]==s2[right2]){
            right1--;
            right2--;
        }
        return (left1>right1) || (left2>right2);










    }
};