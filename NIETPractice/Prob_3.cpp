#include<iostream>
using namespace std;
void electricityBill(){
    int unit;
    cout<<"Enter total unit that you spend: "<<endl;
    cin>>unit;
    int  totalBill;
    int Bill;
    int amountPayable;
    int surcharge;
    if (unit<=50){
    Bill = unit*0.5;
    }
    else if (unit >50){
        int sum1 = 50*0.5;
        int sum2 =  unit - 50;
        sum2 = sum2*0.75;
        Bill = sum1 + sum2;


    } 
    surcharge = Bill*0.2;
    totalBill = Bill  + surcharge;
    cout<<"Total unit consumed is: "<<unit<<endl;
    cout<<"Basic Bill is: "<<Bill<<endl;
    cout<<"Surcharge is : "<<surcharge<<endl;
    cout<<"Total Bill is: "<<totalBill<<endl;
    if (Bill + surcharge<=100){
        amountPayable = 100;
    }
    cout<<"Total payable amout: "<<amountPayable;


}
int main(){
    electricityBill();

}