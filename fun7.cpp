#include<iostream>
using namespace std;
int sum(int,int)
{
    int a,b;
    int c=a+b;
    return sum(a,b);
}
int main(){
    int num1; 
    int num2;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num2 "<<endl;
    cin>>num2;
    int result=num1+num2;   
    cout<<"the sum of numbers is "<<result; 
return 0;
}