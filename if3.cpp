//prime number and even number checking programm
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your number "<<endl;
    cin>>a;
    if(a%2!=0)
    {
        cout<<"you ented a prime number "<<endl;
    }
    if(a%2==0)
    {
        cout<<"you entered a even number "<<endl;
    }
return 0;
}