#include<iostream>
using namespace std;
int main()
{
    //we are making x veriable which will store value
    int x=20;
    cout<<"the value of x is "<<x<<endl;
    //here we have made a refrence veriable y which has same value as x
    int &y=x;
    cout<<"the value of y is "<<y<<endl;
    //here we will store the address of x in z and will print the address
    int *z=&x;
    cout<<"the address is "<<z<<endl;
    //here we will show the value store at address z
    cout<<"the value at address is "<<*(z)<<endl;
return 0;
}