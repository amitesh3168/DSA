class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        if(n==1) return 1;
        int i=0;
        int j =0;
        string kitna ="";
        while(i<n){
            int count =0;
          
            while(j<n&& chars[i]==chars[j]){
                count++;
                j++;
            }
          kitna +=  chars[i];
          if(count>1){
            kitna += to_string(count);
          }
          i=j;
        }
           

        
        for(int i=0;i<kitna.size();i++){
            chars[i] = kitna[i];
        }
        return kitna.size();
    }
};