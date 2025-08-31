#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e, int key){
    int mid = s+(e-s)/2;
    if (s>e){
        return false;
    }
    if (arr[mid]==key){
        return true;
    }
    
    if (key>mid){
      return binarysearch(arr,mid+1,e,key);  
    }
    else {
        return binarysearch(arr,s,mid-1,key);
    }

}
int main(){
    int n = 8;
    int arr[8] ={1,2,3,4,5,6,7,8};
    int key = 11;
    
    bool ans = binarysearch(arr,0,7,key);
    if (ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
}