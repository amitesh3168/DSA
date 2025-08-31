#include<iostream>
using namespace std;
void displaymatrix(int matrix[10][10], int rows , int cols ){
    for  (int i = 0; i<rows; i++){
        for (int j =0; j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    }
void transposed(int matrix[10][10],int transpose[10][10],int rows, int cols){
    for (int i =0;i<cols;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]= matrix[j][i];
        }
    }
}
int main(){
    int matrix[10][10], transpose[10][10];
    int rows, cols;
    cin>>rows>>cols;
    for(int i=0; i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    displaymatrix(matrix,rows,cols);
    cout<<endl;
    cout<<endl;
    transposed(matrix,transpose,rows,cols);
    displaymatrix(transpose,cols,rows);
    return 0;
}