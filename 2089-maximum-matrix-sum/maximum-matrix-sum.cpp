class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long  uttar = 0;
        int n = matrix.size();
        int chhota = INT_MAX;
        int kitnabar = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                chhota = min(chhota, abs(matrix[i][j]));
                uttar +=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                   kitnabar++;
                        }
                    }
                }
            if(kitnabar%2==0){
                return uttar;
            }
        return uttar - 2*chhota;
        
    }
};