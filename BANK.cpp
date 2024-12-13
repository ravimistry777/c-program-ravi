#include<iostream>
using namespace std;
   
int showData(){
    
    int i1;
    int i2;
    int i3;
    int i0;
    int n;
    switch (i1,i2,i3,i0)
    { 
    case 1:
    cout<<"PRESS 1 FOR WITHDRAWAL"<<endl;
    cin>>i1;
    break;
    case 2:
    cout<<"PRESS 2 FOR DEPOSIT"<<endl;
    cin>>i2;
    break;
    case 3:
    cout<<"PRESS 3 FOR CHECK BALANCE"<<endl;
    cin>>i3;
    break;
    case 4:
    cout<<"PRESS 0 EXIT"<<endl;
    cin>>i0;
    break;
    }

}
int main(){
    showData();
    
    int pin;

    cout<<"ENTER THE PIN NO.:- ";
    cin>>pin;
    int withdrawel;
    int deposit;
    int check_balance;
    int exit;
 
    if(pin==0000){
        cout<<"RAVI SIDDHAPURA-1 CURRENT BALANCE is:- 10000"<<endl;
    }else{
        cout<<"SORRY ACCOUNT PIN IS NOT VALID"<<endl;
    }
   

    int amount;
    cout<<"enter the amount please:- ";
    cin>>amount;
    if(amount>10000){
        cout<<"YOU dont have enough balance in your account"<<endl;;
       } else if(amount<10000){
            cout<<"Withdrawal in done"<<endl;;
        }
        cout<<"current balance is:- "<<10000-amount;
    

}