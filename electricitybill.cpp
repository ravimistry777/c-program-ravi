#include<iostream>

using namespace std;

int main(){

    int unit;
    float amt,total_amt,sur_charge;

    cout<<"enter the value of unit:- ";
    cin>>unit;

    if(unit<=100){
        amt=100*0.60;
    }else if(unit<=200){
        amt=100*0.6+(unit-100)*0.80;
    }else if(unit<=300){
        amt=100*0.6+100*0.80+(unit-200)*0.90;
    }else{
        amt=100*0.6+100*0.80+100*0.90+(unit-300)*1.20;
    }

    cout<<"total amount is:-"<<amt<<endl;




    return 0;
}