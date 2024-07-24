#include<iostream>
using namespace std;
int main(){
    int a;
    int &b=a;
    cout<<"value of a is "<<endl;
    cin>>a;
    cout<<"value of b is "<<b<<endl;
    int *c=&a;
    cout<<"the addres of a is "<<c<<endl;
    //diplaying value at address c
    cout<<"value at address c is "<<*c<<endl;
return 0;
}