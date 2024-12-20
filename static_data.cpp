#include<iostream>
using namespace std;
class base{
    static int count;
    int a=0;
    public:
    base(){
        count++;
        a++;
    }
    void printData(){
        cout<<"value of a:- "<<a<<endl;
        cout<<"value of count:- "<<count<<endl;
    }

};

int base::count=10;

int main(){
    class base x;
    x.printData();
    base y;
    y.printData();
    base z;
    z.printData();
}