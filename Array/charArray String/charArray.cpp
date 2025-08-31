#include<iostream>
using namespace std;
int main(){
    char a[10];
    cin>>a;
    int count = 0;
    for(int i=0; a[i] != '\0'; i++){
        count++;
    }
    cout<<count<<endl;
  
    
}