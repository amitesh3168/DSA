// creating maxheap in logn time 
//stepdown process
#include<iostream>
using namespace std;

void heapify(int arr[], int index, int n){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;
    if (left < n  &&  arr[left] > arr[largest] )
        largest = left;
    if (right < n &&  arr[right] > arr[largest])
        largest = right;

    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}
void buildmaxheap(int arr[], int n){
    for(int i = n/2-1; i >= 0;i--)
        heapify(arr, i, n);
    
}
void print_heaps(int arr[], int n){
    for(int i =0; i<n;i++ ){
        cout<<arr[i]<<" ";
        //cout<<endl;
    }
}
void sortheap(int arr[], int n)
{
    for(int i = n-1;i>0;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }
}

int main(){
    int arr[11]={8,6,4,2,4,5,62,6,1,9,0};
    buildmaxheap(arr,11);
    sortheap(arr,11);
    print_heaps(arr,11);
}
