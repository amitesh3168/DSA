class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int cap1 = capacityA;
        int cap2 = capacityB;
         int n =plants.size();
        int s=0;
        int e = n-1;
        int refill =0;
        while(s<=e){
            
            if(s==e){
                if(cap1>cap2){
                     if(plants[s]>cap1){
                        cap1 = capacityA;
                        refill++;
            }
                        cap1-=plants[s];
                        s++;
                }else{                      
                    if(plants[e]>cap2){
                         cap2 = capacityB;
                         refill++;
                             }
                            cap2-=plants[e];
                            e--;
                }
            }else{


if(plants[s]>cap1){
                cap1 = capacityA;
                refill++;
            }
            cap1-=plants[s];
            if(plants[e]>cap2){
                cap2 = capacityB;
                refill++;
            }
            cap2-=plants[e];
            s++;
            e--;
            }


            
            
        }
        return refill;
    }
};