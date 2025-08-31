/// Code For Binary search

#include<iostream>
using namespace std;

int Binarysearch(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;   //for mid we use [start + (end - start)/2] for better optimisatiion 
    while(start <= end) {
        if (arr[mid] == key){
            return mid;
        }
        //going right side
        if (arr[mid]<key) {
            start = mid + 1;
        }
        else {          //going left side
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return 0;
}
int main () {
     int arrEven[8] = {1,2,3,4,5,6,7,8};
     int arrOdd[7] = { 1,2,3,4,5,6,7};

     int arrayeven = Binarysearch(arrEven,8,7);
     int arrayodd = Binarysearch(arrOdd,7,3);

     cout<<"Index of elements 7 is: "<<arrayeven<<endl;
     cout<<"Index of elements 3 is: "<<arrayodd<<endl;
}