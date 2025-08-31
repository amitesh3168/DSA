//Check if array is sorted or not 

#include<iostream>
using namespace std;
bool checksorted(int arr[],int n){
    for (int i = 1;i<n;i++){
    if (arr[i]<arr[i-1]){
        return false;
        }
     
}
    return true;
}

int main(){
    int n = 6;
    int arr[n]={1,2,73,4,5,6};
    if (checksorted(arr,n)){
         cout<<"array is sorted"<<endl;
    }
    else {
        cout<<"array is not sorted"<<endl;
        }
        

       
    return 0;


}