#include<iostream>

using namespace std;

class REPORT
{
    private:
    int adno;
    char name[20];
    int marks[3]={89,56,88};
    int average(int marks);
    int sum;
    

    public:
    void readinfo(){
        cout<<"enter the adno:- "<<adno<<endl;
        cin>>adno;
        cout<<"enter the name of student:- "<<name<<endl;
        cin>>name;
        
        }
    void displayinfo(){
        cout<<"Adno is:- "<<adno<<endl;
        cout<<"name is:- "<<name<<endl;
        cout<<"total marks is:- "<<marks[3]<<endl;
        cout<<"total average is:- "<<sum<<endl;

    }
};
int sum;
int marks=sum+=0;
int REPORT::average(int marks){
    sum=marks/3;
    return sum;

}

int main(){
    REPORT s1;
    s1.readinfo();
    s1.displayinfo();

}