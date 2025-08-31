#include<iostream>
#include<climits>
using namespace std;
 
 int main() {

int size;
cout<<"Enter size of array: "<<endl;
cin>>size;

int arr[size];
cout<<"Enter elemnst of array: "<<endl;
for(int i = 0; i<size; i++){
    cin>>arr[i]; 
    }

int maxNo = INT_MIN;
int minNo = INT_MAX;

for (int i = 0; i<size; i++){
    if(maxNo < arr[i])
        maxNo = arr[i];
    if (minNo > arr[i])
        minNo = arr[i];
}

cout<<"Maximum element in this array is: "<<maxNo<<endl;
cout<<"Minimum element in this array is: "<<minNo<<endl;
 } 