// kadane

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int arr[9] ={1,2,3,4,5,};
    int maxSum = INT_MIN;
    int csum = 0;
    for(int i = 0; i < n; i++){
        csum += arr[i];
        maxSum = max(csum, maxSum);
        if (csum<0){
            return 0;
        }
    }
    cout<<"subarray: "<<maxSum;
    
}