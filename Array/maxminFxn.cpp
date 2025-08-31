#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[], int size) {
int maxNo = INT_MIN;
for(int i = 0; i<size; i++){
   //maxNo = max(maxNo,arr[i]);
   if (maxNo < arr[i])
    maxNo = arr[i];
}
return maxNo;
}
int getmin(int arr[],int size) {
int minNo = INT_MAX;
for (int i = 0; i<size; i++){
   // minNo = min(minNo,arr[i]);
    if (minNo > arr[i]){
    minNo = arr[i];
    }
}
return minNo;
}
int main () {
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    /*if (arr[size]>size){
        cout<<"Not much space for elements"<<endl;
    }*/

cout<<"Maximum element of this array is: "<<getmax(arr,size)<<endl;
cout<<"Minimum element of this array is: "<<getmin(arr,size)<<endl;
}

