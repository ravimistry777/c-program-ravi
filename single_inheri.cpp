#include<iostream>
using namespace std;

class Base{
    int a=10;
    public:
    int b=20;
    protected:
    int c=30;

};

class Derive:public Base{
    public:
    void printData(){
    cout<<c<<endl;
    cout<<b<<endl;
    }
};

int main(){
    Derive s;
    s.printData();
}