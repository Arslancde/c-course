#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    //before changing value at address[0]
    cout<<"before changing the value at address [0] is "<<arr[0];
    //after changing value at address[0]
    arr[0]=73738;
    cout<<"after changing the value at address [0] is "<<arr[0];
    //printing the values of arrays using for loop
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<endl;
    }
    int arr1[]={9,8,7,6,4};
    for(int i=0;i<6;i++)
    {
        cout<<arr1[i]<<endl;
    } 
return 0;
}