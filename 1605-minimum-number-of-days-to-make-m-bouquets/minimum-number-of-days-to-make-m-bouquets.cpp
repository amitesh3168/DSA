class Solution {
public:
        int possible_bouque(vector<int>& bloomDay, int mid, int k){
            int cnt = 0;
            int consect = 0;
            for(int it:bloomDay){
                if(it<=mid){
                    consect++;
                }else{
                    consect=0;
                }
               if(consect==k){
               cnt++;
                consect =0;

               } 
            }
            return cnt;
        }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini =-1;
        int n = bloomDay.size();
        int  s = 0;
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        while(s<=e){
            int mid = s+(e-s)/2;
            if(possible_bouque(bloomDay,mid,k)>=m){
                mini = mid;
                e = mid-1;
            }else{
                s=mid+1;
            }
        }
    return mini;
    }
};