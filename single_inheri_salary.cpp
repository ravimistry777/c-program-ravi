#include<iostream>
using namespace std;
class Account{
    public:
    float salary=60000;
};
class Manager:public Account{
    public:
    float bonus=5000;
};
int main(){
    Manager p1;
    cout<<"Salary:- "<<p1.salary<<endl;
    cout<<"bonus:- "<<p1.bonus<<endl;
    return 0;
}