#include<iostream>

using namespace std;

class TEST
{
    private:
    int testcode;
    char description[50];
    int nocandidate;
    int centerreq;
    int calcntr(int nocandidate);

    public:
    void schedule(){
        cout<<"enter the testcode:- ";
        cin>>testcode;
        cout<<"enter the description:- ";
        cin>>description;
        cout<<"enter the number of candidates:- ";
        cin>>nocandidate;
    }

    void disptest(){
        cout<<"test code is:- "<<testcode<<endl;
        cout<<"description is:- "<<description<<endl;
        cout<<"number of candidates:- "<<nocandidate<<endl;
        cout<<"total centers:- "<<calcntr(nocandidate)<<endl;
    }
};

int TEST::calcntr(int nocandidate){
    centerreq=(nocandidate/100+1);
    return centerreq;
}

int main(){
    TEST s1;
    s1.schedule();
    s1.disptest();

}