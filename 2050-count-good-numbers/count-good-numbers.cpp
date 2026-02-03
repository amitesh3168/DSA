class Solution {
public:
        const  int  m = 1e9+7;
    long long power(long long a , long long b){

        if(b==0){
            return  1;
        }

        long long half = power(a, b/2);
        long long ans  = (half* half) %m; 
        if(b%2==1){
            ans=(ans*a) % m;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long eve = (n+1)/2;
        long long od = n/2;
        return (long long) power(5,eve)*power(4,od) % m;
    }
};