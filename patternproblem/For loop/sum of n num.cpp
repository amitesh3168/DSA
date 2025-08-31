#include<iostream>
using namespace std; 
int main () {
    int n;
    cout<<"Enter a number n"<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout<<"sum of n number  is "<<sum<<endl;
}
