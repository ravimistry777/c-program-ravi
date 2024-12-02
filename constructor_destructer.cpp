#include<iostream>
using namespace std;

class test
{
    int adnum;
    char sname[20];
    float eng,math,science;
    float total=0.0;
    float ctotal;

    public:
    test(){
        cout<<"enter the adnum:- ";
        cin>>adnum;
        cout<<"enter the sname:- ";
        cin>>sname;
        cout<<"enter marks of english:- ";
        cin>>eng;
        cout<<"enter marks of maths:- ";
        cin>>math;
        cout<<"enter marks of science:- ";
        cin>>science;
        
      ctotal=eng+math+science;
    }
    void showData(){
        cout<<"the adnum is:- "<<adnum<<endl;
        cout<<"the sname is:- "<<sname<<endl;
        cout<<"the marks of english is:- "<<eng<<endl;
        cout<<"the marks of maths is:- "<<math<<endl;
        cout<<"the marks of science is:- "<<science<<endl;
        cout<<"total marks is:- "<<ctotal<<endl;

    }
    ~test(){
        cout<<"ALL VALUES ARE DESTROID";
    }
  
};

int main(){
    test s1;
    s1.showData();
}