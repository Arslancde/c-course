#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int *p=arr;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<p;
return 0;
}