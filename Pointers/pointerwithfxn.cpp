#include<iostream>
using namespace std; 
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    *p = *p + 1;  
}
int getsum(int arr[], int n){
    int sum = 0;
    for (int i=0;i<n;i++){
    sum = sum + arr[i];
    }
    return sum;
}
int main(){
   int value = 9;
   /*  int* p = &value;
    //print(p);
    update(p);
    cout<<*p<<endl;  */
   
    //int n = 10;
     int arr[10] ={1,2,3,4,5,6,7,8,9,0};
    cout<<getsum(arr,10)<<endl;
   
    //for(int i = 0;i<10;i++){
      //  cout<<arr[i]<<" ";   
    return 0;
}