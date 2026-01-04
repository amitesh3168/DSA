class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
       for(auto it:s){
        if(it=='#'){
         if(!st.empty())   st.pop();
        }else{
            st.push(it);
        }
       }

        string a="";
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            a=ch+a;
        }
       for(auto it:t){
        if(it=='#'){
           if(!st.empty()) st.pop();
        }else{
            st.push(it);
        }
       }
            string b="";
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            b=ch+b;
        }

return a==b?true:false;


    }
};