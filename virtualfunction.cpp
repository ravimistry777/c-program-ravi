#include<iostream>
using namespace std;
class Base{
    public:
    //virtual void display()=0;
    virtual void display(){
        cout<<"Base class function call";
    }
};
class Derive:public Base{
    public:
    void display(){
        cout<<"Derive class function call";
    }
};
int main(){
    Base *p;
    Derive obj;
    p=&obj;
    p->display();
}