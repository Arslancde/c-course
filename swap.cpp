#include<iostream>
using namespace std;
int main()
{
int a=10;int b=5;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
int temp;
temp=a;
a=b;
b=temp;
cout<<"value of a and b after swapping is "<<a<<endl<<b;
return 0;
}     