#include<iostream>

using namespace std;

int main(){
char name1[]={"skill"};
char name2[]={"qode"};
char name3[50];

int len=0;

for(int i=0;i<5;i++,len++){
    name3[len]=name1[i];
}
for(int j=0;j<4;j++,len++){
    name3[len]=name2[j];
}
cout<<name3<<endl;

return 0;
}