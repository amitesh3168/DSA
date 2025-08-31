#include<iostream>
using namespace std;
int main(){
    int num = 19;
    char chh = 'shukla';
    int *ptr =&num;
    char *p = &chh;
    cout<<"the address of num: "<<&num<<endl;
  cout<<"the value of num is: "<<*ptr<<endl;
  cout<<"the location of num is: "<<ptr<<endl;
  cout<<"the address of chh: "<<*p<<endl;
  cout<<"the location of chh is: "<<&chh<<endl;
}