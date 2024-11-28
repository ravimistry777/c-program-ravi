#include<iostream>

using namespace std;

float sum3(float a,int b){
    float total=0;
    total=a*b;
    return total;
}

int main(){
    float total=0.0;
    total=sum3(12.1,10);
    cout<<"sum3="<<total<<endl;
}