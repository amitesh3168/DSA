class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int total =0;
        int n =plants.size();
        int count =capacity;
        for(int i =0;i<n;i++){
                if(count<plants[i]){
                total = total + (2*i);
               count = capacity;
            }
             count-=plants[i];
                total+=1;
        

         
            
        }
        return total;
    }
};