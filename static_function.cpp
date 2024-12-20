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
    static void print(){
        cout<<"value of count is:- "<<count<<endl;
    }
};

int base::count=10;
int main(){
    class base x;
    x.print();
    base y;
    y.print();
    base z;
    z.print();
}