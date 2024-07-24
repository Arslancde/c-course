#include<iostream>
using namespace std;
int main(){
    int a=10;
    float b=20.66;
    cout<<"value of a before typecasting is "<<a<<endl;
    cout<<"value of b before typecasting is "<<b<<endl;
    cout<<"now we are dispaying values after typecasting "<<endl;
    cout<<"value of a after typecasting is "<<(float)a<<endl;
    cout<<"value of b after typecasting is "<<(int)b<<endl;
    int sum=a+int(b);
    cout<<"sum of typecasting is "<<sum<<endl;
return 0; 
}