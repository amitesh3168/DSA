//Insertion Sort

#include<iostream>
using namespace std;
void insertionsort(int arr[],int n) {
    for (int i = 0; i < n ; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main () {
    int n;
    cout<<"Enter length of array: "<<endl;
    cin>>n;
    cout<<"Enter elemnts of array: "<<endl;
    int arr[n];
    for(int i = 0; i<n;i++) {
    cin>>arr[i];
    }
       insertionsort(arr,n);
        for(int i =0;i<n;i++) {
            cout<<arr[i]<<" ";
        }

}