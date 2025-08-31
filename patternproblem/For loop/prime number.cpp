#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
     int prime = 8;
    for (int i = 2; i < n; i++) {
        if (n%i == 0){
        prime = 0;
        break;
    }
    }
    if(prime == 0){
    cout<<"Number is  not prime"<<endl;
    }
    else{
    cout<<"number is  prime"<<endl;
}
}
    