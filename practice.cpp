#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y,int z){
        brand = x;
        model = y;
        year = z;

    }

};

int main(){
    car carObj1("BMW","X5",1999);
    car carObj2("FORD","MUSTANG",1969);
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";

    return 0;
}