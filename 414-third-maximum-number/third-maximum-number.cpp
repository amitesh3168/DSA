class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>st;
        
        long long a ,b,c;
        a=b=c= LLONG_MIN;
        for(auto it:nums){ 
            if(!st.count(it))       { 
                int d = it;
                if(d>a){
                    c=b;
                    b=a;
                    a=d;
                    
                }else if(d>b){
                    c=b;
                    b=d;
                }else if(d>c){
                    c=d;
                }
                st.insert(it); 
            }         
        }
        if(c==LLONG_MIN) return *max_element(nums.begin(),nums.end());
        return c;
    }
};