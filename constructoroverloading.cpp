#include<iostream>
using namespace std;
//solid shape volume in constructor overloading

class shape
{
    public:
    shape(int a)
    {
        cout<<"area of cube V is:- "<<a*a*a<<endl;
    }
    shape(int l,int w,int h)
    {
        cout<<"Rectangular prism or cuboid:- "<<l*w*h<<endl;
    }
    shape(double pie,float r,int h){
        cout<<"area of cylinder is:- "<<pie*r*r*h<<endl;
    }
    shape(double b,double h){
        cout<<"area of Prism:- "<<b*h<<endl;

    }
};

int main(){
    class shape s1(10),s2(10,20,30),s3(3.14,10.0,20),s4(30,40);
}