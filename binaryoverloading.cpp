#include<iostream>
using namespace std;

class complex
{
    int x;
    int y;

    public:
    complex()
    {
        x=0;
        y=0;
    }
    complex(int a,int b){
        x=a;
        y=b;
    }
    complex operator+(complex z)
    {
        complex t;
        t.x=x+z.x;
        t.y=y+z.y;
        return t;
    }
    void printData()
    {
        cout<<"value of X:- "<<x<<endl;
        cout<<"valu of Y:- "<<y<<endl;
    }
};

int main()
{
    class complex s1,s2,s3;
    s1=complex(10,20);
    s2=complex(30,40);
    cout<<"First Object:- "<<endl;
    s1.printData();
    cout<<"Second object:- "<<endl;
    s2.printData();
    cout<<"Final output:- "<<endl;

    s3=s1+s2;
    s3.printData();

    return 0;

}
