#include<iostream>
using namespace std;
//various shape area in function overloading

class hello{
    public:
    int r=3.14*2*2;
    int h=4*4/2;
    double a = 4*4;
    int b = 16*4;
    };

class Derive:public hello{
    public:
    void printData(){
        cout<<r<<endl;
        cout<<h<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    Derive s;
    s.printData();
}