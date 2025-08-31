//Linear search using recursion
#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<"Size of array: "<<" "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearsearch(int arr[], int n, int key){
    print(arr,n);
    if(n ==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    bool remain = linearsearch(arr+1, n-1, key);
    return remain;
}
int main(){
    int n = 10;
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 9;
    bool ans = linearsearch(arr, n, key);

    if (ans){
        cout<<"Element is present"<<endl;
    }
    else {
        cout<<"Elements is not present"<<endl;
    }
}