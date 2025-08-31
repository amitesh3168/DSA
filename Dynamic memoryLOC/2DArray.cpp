#include<iostream>
using namespace std;
//When Row & Column is same
int main(){
    int n;
    cin>>n;

    int** arr = new int *[n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n; j++){
            cin>> arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0; j < n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}