//recursive method
#include<iostream>
using namespace std;
int getsum(int arr[], int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        cout<<arr[0]<<endl;
    }
    int remain = getsum(arr+1,n-1);
    int sum = arr[0] + remain;
    return sum;
}
int main(){
    int n = 9;
    int arr[9]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int add = getsum(arr,n);
    cout<<"Sum of all Elemnts: "<<add<<endl;



}