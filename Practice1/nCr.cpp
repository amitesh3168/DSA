// nCr sung Function

#include<iostream>
using namespace std;
int factorial (int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr (int n, int r) {
    int numer = factorial(n);
    int denom = factorial(r) * factorial(n-r); 
    
return numer/denom;
}

int main() {
    int n , r;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of r"<<endl;
    cin>>r;
    cout<<"The value of nCr is "<<nCr(n,r)<<endl;
}