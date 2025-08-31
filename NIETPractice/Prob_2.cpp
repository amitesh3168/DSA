#include<iostream>
using namespace std;
void salaryCalculator(){
    int salary;
    cout<<"Enter your salary: "<<endl;
     cin>>salary;
     int hra, da, gross;
     cout<<"Your Basic Salary is: "<<salary<<endl;
    if (salary<=10000){
     hra = salary*0.2;
     da = salary*0.8;
     gross = salary+hra+da;
     cout<<"your hra is : "<<hra<<endl;
     cout<<"your da is : "<<da<<endl;
     cout<<"The Gross salary is: "<< gross<<endl;
    }
    else if(salary<=20000){
        hra = salary*0.25;
        da = salary*0.9;
        gross = salary+hra+da;
        cout<<"your hra is : "<<hra<<endl;
        cout<<"your da is : "<<da<<endl;
        cout<<"The Gross salary is: "<< gross<<endl;

    }
    else if (salary>20000){
        int tax = 0;
        hra = salary*0.3;
        da = salary*0.95;
        gross = salary+hra+da;
        cout<<"your hra is : "<<hra<<endl;
        cout<<"your da is : "<<da<<endl;
        
        if (salary >=25000){
            tax = gross*0.1;
        }
        gross -= tax;
        cout<<"Your tax deducted from your salary"<<tax3<<endl;
        cout<<"The Gross salary is: "<< gross<<endl;
    }
    

}
int main(){

   salaryCalculator(); 
}