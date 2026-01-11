class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       
     int n = fruits.size();
     int neeche = 0;
        int uttar =0;
     if(n==1) return 1;
     map<int,int>kitna;
     for(int i=0;i<n;i++){

        kitna[fruits[i]]++;
        while(kitna.size()>2){
            kitna[fruits[neeche]]--;
            if(kitna[fruits[neeche]]==0){
                kitna.erase(fruits[neeche]);
                
            }
            neeche++;
       
        }

     uttar = max(uttar, i-neeche+1);
     }
     return uttar;
    
    }
};