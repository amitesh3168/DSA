//Dynamic memory location
 
#include<iostream>
using namespace std;
int getsum(int* arr, int n) {
    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main() {

    /*char ch = 'ram';
    cout<<sizeof(ch)<<endl;
    char* neww = &ch;
    cout<<sizeof(neww)<<endl;*/
     int n;
     cout<<"enter size of array: "<<endl;
     cin>>n ;
     //taking elements of array
     int* arr = new int[n];
     for(int i =0 ; i<n; i++){
        cin>>arr[i];
     }

    int ans =  getsum(arr, n);
      
cout<<ans;

delete[] arr;

}