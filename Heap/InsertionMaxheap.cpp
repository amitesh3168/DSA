//Parent value is greater than their child value
// Insertion and deletion in heap
#include<iostream>
using namespace std;
class maxheap{
    public:
    int* arr;
    int size;
    int arr_size;

    maxheap(int n){
        arr = new int[n];
        size = 0;
        arr_size = n;
    }
     void insert(int value){
     if (size == arr_size){
        cout<<"Heap Overflow"<<endl;
        return;}

        arr[size]= value;
        int index = size;
        size++;
     
    while(index>0 && arr[(index-1)/2]< arr[index]){
        int temp = arr[(index-1)/2];
        arr[(index-1)/2] = arr[index];
        arr[index] = temp;
        index = (index-1)/2;

    }
    cout<<arr[index]<<" is inserted"<<endl;
    }
    void heapify(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if (left < size && arr[left]> arr[largest])
            largest = left;
        
        if (right < size && arr[right] > arr[largest])
             largest = right;
             
        if ( largest != index){
            swap(arr[largest], arr[index]);
            heapify(largest);
        }
    }
    
    void deletion(){
         if (size == 0){
            cout<<"Heap is empty"<<endl;
            return;
         }
         cout<<arr[0]<<" is deleted from heap"<<endl;
         arr[0] = arr[size-1];
         size--;
         if (size == 0)
         return;
         heapify(0);
    }

    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
};
int main(){
    maxheap H1(6);
    H1.insert(3);
    H1.insert(4);
    H1.insert(9);
    H1.deletion();
    H1.insert(2);
    H1.insert(43);
    H1.insert(91);
    H1.deletion();
    H1.print();
}