//ek aise dat structure hai jab aap nikalenge toh hamesa maximum elements niklega

#include<iostream>
#include<queue>
using namespace std;
int main (){
    //Max heap
    priority_queue<int> maxi;
    //Min heap
    priority_queue<int,vector<int> ,  greater<int> mini;
    maxi.push(1);
     maxi.push(2);
      maxi.push(3);
       maxi.push(4);
    cout<<"size"<<maxi.size()<<endl;
    int n = maxi.size();
    for (int i = 0; i < n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
}

