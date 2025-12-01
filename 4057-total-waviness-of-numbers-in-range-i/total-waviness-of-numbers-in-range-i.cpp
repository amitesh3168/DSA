class Solution {
public:

    int count( int num1) {
         string  str1 = to_string(num1);
        int waviness=0;
        int n =str1.size();
        
         for(int i=1;i<n-1;i++){
            int sum = str1[i]-'0';
            int left  = str1[i-1]-'0';
            int right = str1[i+1]-'0';
            if(left<sum  && sum > right) waviness++;
            if(left>sum && sum<right) waviness++;
        }
        return waviness;
    }
    int totalWaviness(int num1, int num2) {
         int total =0;
       for(int i=num1;i<=num2;i++){
          
           total+=count(i);
       }
        return total;
    }
};