#include<iostream>
using namespace std;
class hero{
};
class life {
   // public://using this help data below this  to access anywhere
   private:
    int health;
    int wealth;
    char spouse;
    //void print(){
      //  cout<<spouse<<endl;}
    public:
    life(){
        cout<<"constructor called: "<<endl;
    }
    void sethealth(int h){
         health=h;}
    void setwealth(int ch){
        wealth= ch; }
    int gethealth(){
        return health;
    }
    int getwealth(){
        return wealth;
    }
};
int main(){
   //static allocation
   cout<<"hi"<<endl;
    life amitesh;
    cout<<"amitesh"<<endl;
    cout<<"health: "<<amitesh.gethealth()<<endl;
    //dyanimc allocation
    life *sanchit = new life;
    sanchit->sethealth(89);
    cout<<"health: "<<(*sanchit).gethealth()<<endl;
    cout<<"wealth: "<<(*sanchit).getwealth()<<endl;
    cout<<"health: "<<sanchit->gethealth()<<endl;
    
    cout<<"size of amitesh:"<<sizeof(amitesh)<<endl;
   // amitesh.health = 80;
    //amitesh.spouse = 'josb';
    cout<<"size of hero "<<sizeof(hero)<<endl;
    amitesh.sethealth(71);
    amitesh.setwealth(1000000);
    cout<<"health of amitesh: "<<amitesh.gethealth()<<endl;
    cout<<"wealth of amitesh: "<<amitesh.getwealth()<<endl;
    //cout<<"spouse 0f amitesh: "<<amitesh.spouse<<endl;
    


}