//mini calculator
#include<iostream>
using namespace std ;
int main () {
    int a , b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter Second number"<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the operation"<<endl;
    cin>>op;
    
    switch ( op ) {
    
        case '+': cout<<(a+b)<<endl;
        break;
        
        
        case '-': cout<<(a-b)<<endl;
        break;
        
        
        case '*': cout<<(a*b)<<endl;
         break;
         
         
        case '/': cout<<(a/b)<<endl;
         break;
         
         
        case '%': cout<<(a%b)<<endl;
         break;
    }
}