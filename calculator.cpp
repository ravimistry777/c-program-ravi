#include<iostream>
using namespace std;
int main(){
char operators;
int a;
int b;
cout<<"enter the operators(+,-,*,/)";
cin>>operators;
cout<<"enter the first oprand:- "<<endl;
cin>>a;
cout<<"enter the second oprand:- "<<endl;
cin>>b;

switch(operators){
    case'+':
    cout<<"a+b :- "<<a+b<<endl;
    break;
    case'-':
    cout<<"a-b :- "<<a-b<<endl;
    break;
    case'*':
    cout<<"a*b :- "<<a*b<<endl;
    break;
    case'/':
    cout<<"a/b :- "<<a/b<<endl;
    break;
    
}
    return 0;
};