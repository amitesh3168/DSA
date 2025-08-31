#include <iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2,  len1 = mid - s + 1, len2 = e - mid;
    int* arr1 = new int[len1]; 
    int* arr2 = new int[len2];
     
    for (int i = 0; i < len1; i++) { arr1[i] = arr[s + i]; }
    for (int i = 0; i < len2; i++) { arr2[i] = arr[mid + 1 + i]; }
    int idx1 =0, idx2 =0, idxm =s;
    while(len1>idx1 && len2>idx2){
         if (arr1[idx1]<arr2[idx2]){
         arr[idxm++]=arr1[idx1++];
        }
        else { arr[idxm++]=arr2[idx2++]; }
    }
    while(idx1<len1){ 
        arr[idxm++]= arr1[idx1++]; }
    while(idx2<len2){
        arr[idxm++]=arr2[idx2++];
    }
    delete[] arr1,delete[] arr2;
}
void mergesort(int* arr,int s,int e){
    if (s>=e){
        return;
    
    int mid = s + (e-s)/2;
    mergesort(arr,s,mid), mergesort(arr,mid+1,e),merge(arr,s,e);
}
int main(){
    int arr[8]={8,6,7,5,4,3,2,1};
    int n = 8;
    mergesort(arr,0,n-1);
    
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}



