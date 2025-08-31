#include <iostream>
using namespace std;
int main(){
    int n, count;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<"Number is prime"<<endl;
    }
    else {
        cout<<"Number is not prime"<<endl;
    }
}