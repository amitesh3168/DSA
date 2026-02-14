class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       set<int>st;
        for(int it:arr){
            st.insert(it);
        }
        int n =  arr.size();
        int cnt =0;
        for(int i=1;i<=10000;i++){
            if(!st.count(i)){
                cnt++;
            }
            if(cnt==k) return i;
        }
        return -1;
    }
};