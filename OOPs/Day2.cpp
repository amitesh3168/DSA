#include<iostream>
using namespace std;

class Customer {
    string name;
    int accnumber;
    int balance;
    string sign;
    public:
    //default connstructor
    /*Customer(){
    cout<<"Contructor is called"<<endl;
    }*/
//Parametrised constructor
    Customer(){
        name="amitesh";
        accnumber= 23134;
        balance= 312e1;
        sign="ramm";
    }
    Customer(string a, int b, int c, string d){
        name = a;
        accnumber = b;
        balance = c;
        sign = d;
    }
    void display(){
        cout<<name<<" "<<accnumber<<" "<<balance<<" "<<sign<<endl;
    }
};
int main(){
    Customer A2;
    Customer A1("Amitesh",12344,100,"sanchit");
    A1.display();
    A2.display();
}
