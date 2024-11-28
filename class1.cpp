#include<iostream>

using namespace std;

class student
{
    private:
    int adnum;
    char sname[20];
    float eng,math,science;
    float total=0.0;
    float ctotal(float eng,float math,float science);

    public:
    void takeData(){
        cout<<"enter the adnumber:- ";
        cin>>adnum;
        cout<<"enter the sname:- ";
        cin>>sname;
        cout<<"enter marks of eng:- ";
        cin>>eng;
        cout<<"enter marks of math:- ";
        cin>>math;
        cout<<"enter marks of science:- ";
        cin>>science;
    }

    void showData(){
        cout<<"Adnumber:- "<<adnum<<endl;
        cout<<"sname:- "<<sname<<endl;
        cout<<"english:- "<<eng<<endl;
        cout<<"maths:- "<<math<<endl;
        cout<<"science:- "<<science<<endl;
        cout<<"total:- "<<ctotal(eng,math,science)<<endl;
    }
};

float student::ctotal(float eng,float math,float science){
    return eng+math+science;
}

int main(){
    student s1;
    s1.takeData();
    s1.showData();
}