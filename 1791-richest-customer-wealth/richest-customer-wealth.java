class Solution {
    public int maximumWealth(int[][] accounts) {
        int wealth = Integer.MIN_VALUE;
        int m = accounts.length;
        for(int i=0;i<m;i++){
            int sum = 0 ;
            for(int j= 0;j<accounts[i].length;j++){
                sum+=accounts[i][j];
            }
            wealth = Math.max(sum, wealth);


        }
        return wealth;
    }
}