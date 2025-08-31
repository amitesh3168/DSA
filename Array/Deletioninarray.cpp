#include<iostream>
using namespace std;
int main(){
    int n, posi;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element of array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
     
    cout<<"enter position of element for removing:"<<endl;
    cin>>posi;
    
    if (posi<1 || posi>n){
        cout<<"Invalid position"<<endl;
    }
    else {
        for (int i = posi-1; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    cout<<"array after deletion"<<endl;
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}