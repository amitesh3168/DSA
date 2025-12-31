class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        int index=0;
        string uttar="";
        stack<char>st;
        while(index<n){
            if(s[index] >='a'  && s[index]<='z'){
                st.push(s[index]);
            }else{
                st.pop();
            }
            index++;
        }
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            uttar=ch+uttar;
        }
        return uttar;
    }
};