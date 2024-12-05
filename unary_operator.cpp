#include<iostream>
using namespace std;

class complex{
    int x;
    int y;
    public:

    void getData(int a,int b){
        x=a;
        y=b;
    }
    void printData(){
        cout<<"value of X:- "<<x<<endl;
        cout<<"value of Y:- "<<y<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
    }
};

int main(){
    class complex s1;
    s1.getData(-5,2);
    s1.printData();

    cout<<"AFTER FUNCTION CALL:- "<<endl;
    -s1;
    s1.printData();
}