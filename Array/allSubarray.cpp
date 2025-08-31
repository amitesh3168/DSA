#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = { 1, 2, 3, 4, 5, 6, 7};
    for (int s=0;s<n;s++){
        for (int e = s; e<n;e++){
            for (int i = s; i<= e;i++){
                cout<<arr[i];
            }
           cout<<" "; 
        }
        cout<<endl;
    }
    return 0;
}