#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"using function with two arguments "<<endl;
    return a+b;
}
int sum(int a,int b,int c)
{
    cout<<endl;
    cout<<"using function with three arguments "<<endl;
    return a+b+c;
}
int main(){
    cout<<"the sum of two arguents function is "<<sum(1,2)<<endl;
    cout<<"the sum of three arguents function is "<<sum(1,2,4)<<endl;

return 0;
}