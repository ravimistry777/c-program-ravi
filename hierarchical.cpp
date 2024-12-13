#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"Enter the value of A:- ";
        cin>>a;
    }
};

class Derive1:public Base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"Enter the value of B:- ";
        cin>>b;
    }
    void sum(){
        cout<<"value of a and b sum:- "<<a+b<<endl;
    }
};

class Derive2:public Base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"Enter the value of C:- ";
        cin>>c;
    }
    void mult(){
        cout<<"value of a and c sum:- "<<a*c;
    }
};

int main(){
    Derive1 obj1;
    obj1.setA();
    obj1.setB();
    obj1.sum();

    Derive2 obj2;
    obj2.setA();
    obj2.setC();
    obj2.mult();
}
