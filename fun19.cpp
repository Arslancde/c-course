#include<iostream>
using namespace std;
int sum(int n)
{
if(n<=0)
{
    return 0; 
}
{
    return n+sum(n-1);
}
}
int main(){
    int num;
    cout<<"enter number for sum "<<endl;
    cin>>num;
    cout<<"sum of first "<<num<<" number is "<<sum(num)<<endl;
return 0;
}