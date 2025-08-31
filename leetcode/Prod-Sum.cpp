// This code give you the difference between product & sum of Given number.

#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    int product = 1;
    int sum = 0;
    while (n != 0){
       int digit = n%10;
        product = product * digit;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"The product and sum of given number: "<<product-sum;
}