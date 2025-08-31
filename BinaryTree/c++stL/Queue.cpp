//Queue

#include<iostream>
#include<queue>
using namespace std;
int main () {
    queue<string> q;

    q.push("Amitesh");
    q.push("sanchit");
    q.push("shukla");

    cout<<"Size before pop" <<q.size()<<endl;
    cout<<"first element" <<q.front()<<endl;
    q.pop();
    cout<<"First element" <<q.front()<<endl;
    cout<<"Size after pop"  <<q.size()<<endl;
}