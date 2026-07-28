class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxi =Integer.MIN_VALUE;
        for(int i:candies){
            maxi = Math. max(i, maxi);
        };
        ArrayList<Boolean> dedo = new ArrayList<>();
        for(int i = 0;i<candies.length;i++){
            int cap =  candies[i]+extraCandies;
            if(cap>=maxi){
                dedo.add(true);

            }else{
                dedo.add(false);
            }
        }

        return dedo;

        }  

} 