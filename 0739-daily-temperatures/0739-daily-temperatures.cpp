class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       int n = temp.size();
          vector<int>v(n);
          stack<int>st;
          for(int i=0;i<n;i++){
            int var = temp[i];
            while(!st.empty() && var>temp[st.top()]){
                v[st.top()] = i-st.top();
                st.pop();
                
                
            }
            st.push(i);
            
          }
          return v;
    }
};