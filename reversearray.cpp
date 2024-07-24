#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<"array before reverse is as "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"array after reversing is as "<<endl;
    for(int i=5;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}