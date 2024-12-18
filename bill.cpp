#include<iostream>
using namespace std;

int main(){
    float rate,qty,amt=0,netbill=0,billamt=0;
    float discount=0.0,gst=0.0;

    cout<<"Enter the product price:- ";
    cin>>rate;
    cout<<"enter the qty of product:- ";
    cin>>qty;

    amt=rate*qty;
    discount=amt*0.05;
    billamt=amt-discount;
    gst=billamt*0.18;
    netbill=gst+billamt;

    cout<<"Total Amount is:- "<<amt<<endl;
    cout<<"Total discount applied:- "<<discount<<endl;
    cout<<"Bill amount is:- "<<billamt<<endl;
    cout<<"Total GST applied:- "<<gst<<endl;
    cout<<"NET BILL IS:- "<<netbill<<endl;
    
                        
    return 0;
}