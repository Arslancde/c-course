#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter element to insert into array "<<endl;
    for(int i=0;i<6;i++)
    {
    cin>>arr[i];
        // cout<<"your array is "<<arr[i]<<endl;
    }
    cout<<"displaying element of array "<<endl;
    for(int i=0;i<6;i++)
    {
    cout<<arr[i]<<endl;
    }
    cout<<"displaying elements of array in reverse order "<<endl;
    for(int i=arr[5];i>0;i--)
    {
        cout<<arr[i];
    }
return 0;
}