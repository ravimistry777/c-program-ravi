#include<iostream>
using namespace std;

template<class t>
void display(t a){
    cout<<"Display template:-"<<a<<endl;
}

template<class t,class y>
void display(t a,y b){
    cout<<"display template:- "<<a<<'\t'<<b<<endl;
}

int main(){
    display(10,20);
    display('a',30);
    display(20.5,'b');
}