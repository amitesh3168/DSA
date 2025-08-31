#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    
   
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
           i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int n = 10;
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};

    n = removeDuplicates(arr, n); 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; 
    cout << endl;

    return 0;
}  
