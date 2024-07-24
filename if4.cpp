#include<iostream>
using namespace std;
int main(){
    int secret;
    int input;
    cout<<"enter your secret password "<<endl;
    cin>>secret;
    cout<<"enter your password to login "<<endl;
    cin>>input;
    if(input==secret)
    {
        cout<<"your password is correct"<<endl;
    }
    if(input!=secret)
    {
        cout<<"incorrect password "<<endl;
    }
return 0;
}