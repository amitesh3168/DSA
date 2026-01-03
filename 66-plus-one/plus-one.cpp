class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
       

        int carry=1;
        int idx=n-1;

        while(carry>0){

            digits[idx]+=1;
            
         if(digits[idx]>=10){
            carry=digits[idx]/10;
            digits[idx]%=10;
            idx--;
            
         }else{
            carry--;
          }

          if(idx<0){
            break;
          }
        }
        if(idx<0){
        vector<int>arr(n+1);
        arr[0]=1;
        int j=1;
            for(int i=0;i<n;i++){
                arr[j]=digits[i];
                j++;
            }
            return arr;
        }

        return digits;
    }
};