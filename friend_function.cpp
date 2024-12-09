#include<iostream>
using namespace std;
class Box{
    int l;
    int w;
    int h;
    friend Box add(Box,Box);

    public:
    void setData(int a,int b,int c){
        l=a;
        w=b;
        h=c;
    }
    int getVolume(){
        return l*w*h;
    }
}; 

Box add(Box x,Box y){
    Box z;
    z.l=x.l+y.l;
    z.w=x.w+y.w;
    z.h=x.h+y.h;

    return z;
}

int main(){
    Box s1,s2,s3;

    s1.setData(2,2,2);
    s2.setData(5,5,5);

    cout<<"Volume of s1:- "<<s1.getVolume()<<endl;
    cout<<"Volume of s2:- "<<s2.getVolume()<<endl;

    s3=add(s1,s2);
    cout<<"volume of s3:- "<<s3.getVolume()<<endl;
}