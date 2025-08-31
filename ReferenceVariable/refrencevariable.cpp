#include<iostream>
using namespace std;
    void update(int n){
        n++;
    }
        void update2(int& n){
        n++;
        }
     int main(){   
/*  int i = 5;
    int& j = i;
    cout <<i<<endl;
    i++;
    cout <<i<<endl;
    i++;
    cout <<j<<endl;  */
    int n = 7;
    update(n);
    cout<<"before: "<<n<<endl;
    update2(n);
    cout<<"After: "<<n;
   


}