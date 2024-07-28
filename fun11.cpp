#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1,num2;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num2 "<<endl;
    cin>>num2;
    swap(num1,num2);
    cout<<"values after swap of num1 is "<<num1<<"and num2 is "<<num2;
return 0;
}