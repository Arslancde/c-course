#include<iostream>
using namespace std;
void fun3(int n){
    cout<<n<<"days left"<<endl;
}
void fun2(int n)
{
    cout<<n<<"days left"<<endl;
}
void fun1(int n)
{
    cout<<n<<"days left"<<endl;
}
void fun0(int n)
{
    cout<<n<<"days left"<<endl;
}
int main(){
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
return 0;
}