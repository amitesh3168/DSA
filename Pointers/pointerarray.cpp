#include<iostream>
using namespace std;
int main() {
     
     int arr[10]={1,2};

      cout<<"address of first block: "<<arr<<endl;
      cout<<arr[0]<<endl; //only print array element
      cout<<"adress of first block: "<<&arr[0]<<endl;
        //these are two method of printing location of first elements
         cout <<"first: "<<*arr<<endl;
         cout <<"first: "<<*arr+1<<endl;
            //(*arr)print value of 0th location
            //(*arr)+1print value +1 of 0th location
            //*(arr+1) print second location of array
           int i = 2;
           cout<<i[arr]<<endl; 
           int temp[10];
           cout<<sizeof(temp)<<endl;
           cout<<"first: "<<sizeof(*temp)<<endl;
           int *ptr = &arr[0];
           cout <<*ptr<<endl;
            cout <<&ptr<<endl; 
            cout <<ptr<<endl;*/

            int arr[10];
            arr=arr+1; Error
          int *ptr = &arr[0];
        cout<<ptr <<endl;
        ptr = ptr + 1;
        cout<<ptr<<endl;   //it's show no error

        int arr[10] ={1,2,3,34};
        char ch[10] = "ABCDEFG";
        cout<<arr<<endl;  
        // They both work differently in case of int and char
        cout<<ch<<endl;





       






}