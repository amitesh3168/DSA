
#include<iostream>
using namespace std;
void convertdecimal(string str){
    int res = 0;
    int p= 1;
    int len = str.size();
    for(int i = len-1;i>=0;i--){
        if (str[i]=='1'){
          res += p;
            
        }
        p= p*2;
    }

    cout<< res;
    
}
int main(){
string str  ="1101";

convertdecimal(str);;
}