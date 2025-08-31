#include<iostream>
using namespace std;
int percentage(int totalMarks){
    int sum = totalMarks/500;

    return sum*100;      
}
void gradeCalculator(){
    int maths, physics, biology, chemistry, computer;
    cout<<"Enter Physics marks: "<<endl;
    cin>>physics;
    cout<<"Enter Chemistry marks: "<<endl;
    cin>>chemistry;
    cout<<"Enter Biology marks: "<<endl;
    cin>>biology;
    cout<<"Enter Maths marks: "<<endl;
    cin>>maths;
    cout<<"Enter Computer marks: "<<endl;
    cin>>computer;
    
    cout<<"marks of physics: "<<physics<<endl;
    cout<<"marks of chemistry: "<<chemistry <<endl;
    cout<<"marks of biology: "<<biology<<endl;
    cout<<"marks of maths: "<< maths<<endl;
    cout<<"marks of computer: "<<computer <<endl;


    int totalMarks = maths + physics  + chemistry+ biology+computer;
  


    int percent = totalMarks/5;


    cout <<"Percentage of student is: "<< percent<<endl;



    if (maths <35||computer<35||biology<35||physics<35||chemistry<35){
        cout <<"The Grade of Student is F";
        return;
    }
    else if (percent>=90){
        cout <<"The Grade of Student is A";
        return;
    }
    else if (percent>=80){
        cout <<"The Grade of Student is B";
        return;
    }
    else if (percent >=70){
        cout <<"The Grade of Student is C";
        return;
    }
    else if (percent >=60){
        cout <<"The Grade of Student is D";
        return;
    }
    else if (percent >=40){
        cout <<"The Grade of Student is E";
        return;
    }
    else if (percent <40){
        cout <<"The Grade of Student is F";
        return;
    }
}
int main(){
    gradeCalculator();
}