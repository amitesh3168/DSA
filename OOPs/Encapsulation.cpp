#include<iostream>
using namespace std;
class Customer{
    string name;
    int accno;
    int balance;
    static int total_counter;
    public: 
    Customer(string name, int accno, int balance){
        this->name = name;
        this->accno= accno;
        this->balance= balance;
       this->total_counter++;
    }
    void deposit(int amount){
        if (amount>0){
            balance += amount;
    }else    {
        cout<<"invalid amount"<<endl;
}}
     void withdraw(int amount){
        if (amount>0&&amount<=balance){
        balance -= amount;
        } else{
             cout<<"invalid amount"<<endl;
        }
    }   void display(){
    cout<<name<<" "<<accno<<" "<<balance<<endl;
   }
    void display_total(){
        cout<<total_counter<<endl;}
};
int Customer::total_counter = 0;
int main(){
    Customer A1("ram", 1232, 111);
    Customer A2("ramsad", 1232, 1121);
    A1.withdraw(100);
    A1.display();


}