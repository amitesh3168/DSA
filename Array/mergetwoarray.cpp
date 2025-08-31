//Merge two  array

#include <iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int k =0;
    int i =0;
    int j=0;
    
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    
    }
    }
    int main() {
        int arr1[5]={1,2,3,4,5};
        int arr2[3]={8,7,6};
        int n=5;
        int m=3;
        int arr3[8]={};
        merge(arr1,5,arr2,3,arr3);
        for(int i=0;i<n+m;i++){
            cout<<arr3[i]<<" ";
        }
    }

