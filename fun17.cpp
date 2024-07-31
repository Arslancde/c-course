#include<iostream>
using namespace std;
void fun2(int n);
void fun1(int n);
void fun0(int n);

void fun3(int n){
    cout<<n<<"days left"<<endl;
    fun2(n-1);
}
void fun2(int n)
{
    cout<<n<<"days left"<<endl;
    fun1(n-1);
}
void fun1(int n)
{
    cout<<n<<"days left"<<endl;
    fun0(n-1);
}
void fun0(int n)
{
    cout<<n<<"days left"<<endl;
}
int main(){
    fun3(3);
return 0;
}