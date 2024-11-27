#include<iostream>

using namespace std;

int main(){
    int total_seconds;

    cout<<"enter the value of seconds:- ";
    cin>>total_seconds;

    int hours=total_seconds/3600;
    int min=(total_seconds%3600)/60;
    int seconds=total_seconds%60;

    cout<<"hour:- "<<hours<<endl;
    cout<<"min:- "<<min<<endl;
    cout<<"second:- "<<seconds<<endl;



    return 0;
}