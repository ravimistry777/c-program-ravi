#include<iostream>
using namespace std;
//various shape area in function overloading

class hello{
    public:
    void test(int r){
        cout<<"area of circul is:- "<<3.14*r*r<<endl;;
    }
    void test(int h,int b){
        cout<<"area of triangle:- "<<h*b/2<<endl;
    }
    void test(double a){
        cout<<"area of square is:- "<<a*a<<endl;
    }
    void test(double l,double w){
        cout<<"area of rectangle is:- "<<l*w<<endl;
    }
};

int main(){
    class hello obj;
    obj.test(22);
    obj.test(10,20);
    obj.test(10.0);
    obj.test(20.0,15.0);
}