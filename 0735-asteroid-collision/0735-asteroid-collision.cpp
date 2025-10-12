class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast){
       
      
    stack<int>st;
    for(int &it:ast){
       while(!st.empty() && it<0&&st.top()>0){
        int sum = it+st.top();
        if(sum<0){
            st.pop();
        }else if (sum>0){
            it=0;
           break;
            
        }else{
            st.pop();
            it=0;
            break;
        }
       }
       if(it!=0){
        st.push(it);
       }

    } 
    vector<int>v(st.size());
    int i= v.size()-1;
    while(!st.empty()){
        v[i]=st.top();
        st.pop();
        i--;
    }
return v;

    }
      

        

};