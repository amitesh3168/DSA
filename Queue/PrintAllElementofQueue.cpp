//printing all element of queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>A;
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);
    A.push(6);
    int n = A.size();
    while(n--){
        cout<<A.front()<<" ";
        A.push(A.front());
        A.pop();
    }
}12