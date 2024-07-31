#include<iostream>
using namespace std;
int sum(int a,int b=10)
{
    cout<<"sum is as "<<a+b<<endl;
    cout<<"product is as "<<a*b<<endl;
}
int main(){
    int num1;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<sum(num1);
return 0;
}