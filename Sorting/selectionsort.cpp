#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort (int arr[], int n) {
        for(int i=0;i<n-1;i++){
           int  min = i;
            for (int j = i; j<=n-1;j++){
                if (arr[j] < arr[min]){
                    min =j;
                }
            }
          /* int temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;*/
            swap(arr[i],arr[min]);
        }

}


int main(){
    int n;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0;i<n;i++){
     cin>>arr[i];
    } 
     selection_sort (arr, n);
    cout<<"your sorted array is: "<<endl;
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
     }
     
    
}