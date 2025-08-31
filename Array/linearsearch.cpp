#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n]={1,2,73,4,5,6};
    int key = 73;
    for (int i = 0; i<n; i++){
        if (arr[i] == key){
            cout<<"Index of key is: "<<i<<endl;
        }
    }
    


}