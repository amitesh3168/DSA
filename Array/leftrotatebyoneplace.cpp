#include<iostream>
using namespace std;
int main(){
    int n =7;
    int arr[n]={1,2,3,4,5,6,7};
    int temp = arr[0];
    for (int i =1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

 for (int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
}
}
