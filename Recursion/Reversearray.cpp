//reverse array using one pointer 
//reccursive method
#include<iostream>
using namespace std;
void fxnn(int i, int arr[], int n) {
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    fxnn(i+1,arr,n);
}
int main (){
    int n; 
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0;i<n;i++) 
    cin>>arr[i];
    fxnn(0,arr,n);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    


    }

