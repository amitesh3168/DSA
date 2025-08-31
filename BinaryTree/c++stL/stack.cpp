//Stack

#include<iostream>
#include<stack>

using namespace std;
int main () {
    stack<string> s;
      
      s.push("Amitesh");
      s.push("Sanchit");
      s.push("Shukla");

      cout<<"Top Element"<<s.top()<<endl;
      cout<<"size of stack"<<s.size(<<endl;
      cout<<"Empty or Not"<<s.empty()<<endl;

}