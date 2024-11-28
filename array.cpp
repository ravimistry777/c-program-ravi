#include<iostream>

using namespace std;

int main(){

    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<"enter the element:- "<<i,j;
        cin>>arr[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"i,j"<<arr[i][j];
    }
    cout<<"\n";
}

    return 0;
}