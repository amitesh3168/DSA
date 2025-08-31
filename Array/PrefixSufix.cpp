//Prefix && Sufix SUM
#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int arr1[8];
    arr1[0]=arr[0];
    cout<<"Prefix sum is: "<<endl;
    for(int i=1;i<8;i++){
        arr1[i]=arr1[i-1]+arr[i];
    }
    for(int i =0;i<8;i++){
    cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int arr2[8];
    arr2[7]=arr[7];
    cout<<"Suffix Sum: "<<endl;
    for(int i= 6;i>=0;i--){
        arr2[i]=arr2[i+1]+arr[i];
    }

    for(int i=0;i<8;i++){
        cout<<arr2[i]<<" ";
    }
    
}