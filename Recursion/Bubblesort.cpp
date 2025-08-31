#include <iostream>
using namespace std;
void bubblesort(int* arr,int n){
    if (n==0||n==1){
        return;
    }
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int n = 10;
    int arr[10]= {1,2,0,152,54,44,36,66,9,4};
    bubblesort(arr,n);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}