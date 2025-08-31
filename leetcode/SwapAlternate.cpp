// Swap Alternate

#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for ( int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
    
}
cout<<endl;
}
void swapAlternate(int arr[], int size){
    for(int i = 0;i<size; i += 2){
       if (i + 1 < size){
           swap(arr[i],arr[i+1]);
       }
    }
}
 int main() {
     int arr[10] = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9};
     int arrr[7] = {12, 11, 14, 13, 15, 16, 17};
     
     swapAlternate(arr,10);
     printArray(arr,10);
     
     
     swapAlternate(arrr,7);
     printArray(arrr,7);
 }