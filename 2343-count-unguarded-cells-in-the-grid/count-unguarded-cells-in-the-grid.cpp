class Solution {
public:
void makeguard(int row, int col,vector<vector<int>>& temp ){

        for(int i=row-1;i>=0;i--){
        if(temp[i][col]==2||temp[i][col]==3){
            break;
        }
        temp[i][col]=1;
    }
    for(int j = col+1; j < temp[0].size(); j++) {
            if(temp[row][j] == 2 || temp[row][j] == 3) {
                break;
            }
            temp[row][j] = 1; 
        }
    for(int j=col-1;j>=0;j--){
        if(temp[row][j]==2||temp[row][j]==3){
            break;
        }
        temp[row][j]=1;
    }
    for(int i=row+1;i<temp.size();i++){
        if(temp[i][col]==2||temp[i][col]==3){
            break;
        }
        temp[i][col]=1;
    }



}
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> temp(m, vector<int>(n,0));

        for(vector<int> v: guards){
            int i= v[0];
            int j =v[1];
            temp[i][j]=2;
        }
         for(vector<int> v: walls){
            int i= v[0];
            int j =v[1];
            temp[i][j]=3;
        }
        for(vector<int> v: guards){
            int i= v[0];
            int j =v[1];
            makeguard(i,j,temp);
        }





        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(temp[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};