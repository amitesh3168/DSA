//checking array is sorted using recursive method 
#include<iostream>
using   namespace std;
bool checksorted(int* arr, int n){
    if (n ==0 || n==1){
        return true;
    }
    if (arr[0]>arr[1]){
        return false;
    }
    bool remain = checksorted(arr+1, n-1);
 return remain;
}
int main(){
    int n = 10;
    int arr[10]= {1, 2,3,5,6,7,8,9,11,12};
   

   bool ram = checksorted(arr, n);
   if (ram){
    cout<<"array is sorted"<<endl;
   }
    else{
        cout<<"array is not sorted"<<endl;
    }
    
}