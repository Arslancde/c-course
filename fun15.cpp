#include<iostream>
using namespace std;
int printtable(int a)
{
    for(int i=1;i<=10;i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
}
int main(){
    int num1;
    cout<<"enter number for table "<<endl;
    cin>>num1;
    cout<<printtable(num1);
return 0;
}