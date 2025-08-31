//Brute Method of Maximum Subarray

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int arr[9] ={1, 2,3 ,4,9, 5,6 ,8,7};
    int maxSum = INT_MIN;
    for (int s = 0; s < n; s++){
        int Sum = 0;
        for (int e = s; e < n; e++){
            Sum += arr[e];
            maxSum = max(Sum, maxSum);
        }

    }
    cout<<"Maximum subarray of given array: "<<maxSum<<endl;
}