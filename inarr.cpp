#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4};
    cout<<"array before insertion is "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    int pos=2;
    int newelement=11;
    for(int i=3;i>pos;i--)
    {
        arr[i+1]=arr[i];
    }
    cout<<endl;
    arr[pos]=newelement; 
    int newarray=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<newarray;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<"array  elements aftert deletion are "<<endl;
return 0;
}