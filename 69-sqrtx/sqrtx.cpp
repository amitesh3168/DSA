class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int s = 1;
        int e = x/2;
        while(s<=e){
             int mid = s+(e-s)/2;
             long long ans = (long long) mid*mid;
             if(ans == x){
                return mid;
             }
             else if (ans<x){
                s=mid+1;
             }else{
                e=mid-1;
             }

        }
        return e;
        
    }
};