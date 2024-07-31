#include<iostream>
using namespace std;
void readarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int calaverage(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"The average of all nubers is "<<endl;
    return sum/n;
}
int aboveaverage(int arr[],int n,int average)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>average)
        {
            cout<<"above average is "<<arr[i]<<endl;
        }
    }
}
int main(){ 
    int n=5;
    int arr[]={1,2,3,4,5};
    readarray(arr,n);
    int average=calaverage(arr,n);
    cout<<average;
    cout<<endl;
    aboveaverage(arr,n,average);
return 0;
}